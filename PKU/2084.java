import java.util.Scanner;
import java.math.BigInteger;

public class Main {

	public static void main(String[] args) {

        int i,j,v;
        String s1;
         BigInteger[] arr = new BigInteger [201];
             arr[1]= new BigInteger("1");
         for(i=2;i<=100;i++)
         {
             j=4*i-2;v=1+i;
             s1=""+j;
             arr[i] = new BigInteger(s1);
             s1=""+v;
             arr[0]=new BigInteger(s1);
             arr[i]=    arr[i].multiply(arr[i-1]);
             arr[i] = arr[i].divide(arr[0]);
               
         }
      Scanner sc=new Scanner(System.in);
		int test=sc.nextInt();
		while(test>0){
			System.out.println(arr[test]);
			test=sc.nextInt();
		}
	}
    }