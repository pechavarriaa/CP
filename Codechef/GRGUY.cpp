#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <queue>
#include <map>
struct ura{
	int x, y,c;
};
using namespace std;
ura k,q;
int n, i, t, m, j, p, L;
char s[2][1000009];
int main(){
	scanf("%d", &t);
	while (t--)
	{
		q.x = 0;
		q.y = 1;
		q.c = 0;
		k.x = 0;
		k.y = 0;
		k.c = 0;
		scanf("%s",s[0]);
		scanf("%s", s[1]);
		L = strlen(s[0]);
		if (s[0][0] != '#'){
			k.x = 0;
			k.y = 0;
			k.c = 0;
		}
		else
			k.y = 3;
		if (s[1][0] != '#'){
			q.x = 0;
			q.y = 1;
			q.c = 0;
		}
		else
			q.y = 3;
		j = 0;
		if (s[0][0] != '#' || s[1][0] != '#' && j==0)
			while (j==0 && k.x < L - 1 && q.x < L - 1)
			{
				
				if (k.y == 0){
					if (s[k.y][k.x + 1] == '.'){
						k.x++;
 
					}
					else if ( s[k.y + 1][k.x + 1] == '.'){
						k.x++;
						k.y++;
						k.c++;
					}
					else
						j = 1;
				}
				else
				if (k.y == 1){
					if (s[k.y][k.x + 1] == '.')
						k.x++;
					else if (s[k.y][k.x + 1] == '#' && s[k.y - 1][k.x + 1] == '.'){
						k.x++;
						k.y--;
						k.c++;
					}
					else
						j = 1;
				}
				if (q.y == 0){
					if (s[q.y][q.x + 1] == '.')
						q.x++;
					else if (s[q.y][q.x + 1] == '#' && s[q.y + 1][q.x + 1] == '.'){
						q.x++;
						q.y++;
						q.c++;
					}
					else
						j = 1;
				}
				else
				if (q.y == 1){
					if (s[q.y][q.x + 1] == '.')
						q.x++;
					else if (s[q.y - 1][q.x + 1] == '.'){
						q.x++;
						q.y--;
						q.c++;
					}
					else
						j = 1;
				}
			}
		else{
			printf("No\n");
			k.x = -9; q.x = -9; j = 0;
		}
		if (k.x == q.x&& q.x == L - 1)
		{
			if (q.c < k.c)
				k.x = -2;
			else
				q.x = -2;
		}
		if (k.x == L - 1 )
			printf("Yes\n%d\n",k.c);
		else
		if (q.x == L - 1)
			printf("Yes\n%d\n", q.c);
		else
			if (j==1)
			printf("No\n");
 
	}
}