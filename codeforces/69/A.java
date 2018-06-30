import java.util.Scanner;


public class young {
	public static void main(String[] args) {
Scanner input =new Scanner(System.in);
int n = input.nextInt();
int [] x =new int [n];
int [] y =new int [n];
int [] z =new int [n];
int countx =0;
int county =0;
int countz =0;
for(int i =0;i<n;i++)
{
	x[i]=input.nextInt();
	y[i]=input.nextInt();
	z[i]=input.nextInt();
}
for(int i =0;i<n;i++)
{
	countx +=x[i];
	county +=y[i];
	countz +=z[i];
}
if(countx !=0|| county!=0 || countz!=0)System.out.println("NO");
else                                   System.out.println("YES");

	}

}
