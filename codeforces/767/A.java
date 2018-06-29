import java.util.Scanner;


public class snacktower {
	public static void main(String[] args) {
Scanner input = new Scanner(System.in);
int n = input.nextInt();
int [] snack = new int [n+1];
for(int i=1;i<n+1;i++)
{
	snack[i]=input.nextInt();
}
boolean [] visted = new boolean[n+1];
int c = n ;
for(int i=1;i<=n;i++)
{
	visted[snack[i]]=true;
	while(visted[c])
	{
		System.out.print(c--+" ");
	}
	System.out.println();
}
	}

}
