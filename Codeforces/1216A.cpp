    #include <bits/stdc++.h>
    using namespace std;
    int n,ct;
    string s;
    int main()
    {  
        cin >> n;
        cin >> s;
        for(int i=0;i<n;i+=2)
        {
            if(s[i] == s[i+1])
            {
                ct++;
                if(s[i]=='a')
                    s[i]='b';
                else
                    s[i]='a';
            }
        }
        cout << ct <<endl << s <<endl;
    }