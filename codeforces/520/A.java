import java.util.Scanner;


public class Pangram {
	public static void main(String[] args) {
Scanner input =new Scanner(System.in);
int q =0;
int n = input.nextInt();
input.nextLine();
String x =input.nextLine();
char [] y =new char[n];
int   count = 0;
for(int i=0;i<n;i++)
{
         char m =x.charAt(i);
	   m= Character.toLowerCase(m);
	     y[i]   = m  ;
}
	
for(int i =0;i<n;i++)
{
	for (int j=i-1;j!=-1;j--)
	{
		if(y[j]==y[i])
		{
			 q = 1;
			 break;
		}
    }
	if(q==0)count++;
	   q=0;
}
if(count==26)System.out.println("YES");
else System.out.println("NO");


	}

}