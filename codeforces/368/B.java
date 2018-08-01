import java.util.Scanner;
public class Sereja {
	public static void main(String[] args) {
Scanner input =new Scanner(System.in);
int n =input.nextInt();
int m =input.nextInt();
int []   x=new int [n+1];
for(int i=1;i<=n;i++)
{
	x[i]=input.nextInt();
}
int [] sum =new int [n+1];
//int [] seq =new int [100002];
  boolean [] seq =new boolean[100002];
for(int i =n;i>0;i--)
{
	if(i==n)
	{
		sum[i]=1;
		seq[x[i]]=true;
	}
	else 
	{
		if(seq[x[i]]==true)
		{
			sum[i]=sum[i+1];
		}
		else 
		{
			seq[x[i]]=true;
			sum[i]=sum[i+1]+1;
		}
	}
}
for(int i=0;i<m;i++)
{
	int q =input.nextInt();
	System.out.println(sum[q]);
}

	}}