import java.util.Arrays;
import java.util.Scanner;
public class vlad {
	public static void main(String[] args) {
Scanner input =new Scanner(System.in);
int n = input.nextInt();
int [] x =new int [n+1];
int [] sequence = new int [200001];
int max =0;
for(int i=1;i<=n;i++)
{
	x[i]=input.nextInt();
	sequence[x[i]]=i;
	if(x[i]>max)max=x[i];
}
int min = 2000001;
int index = 0;
	for(int i=0;i<=200000;i++)
{
	if(sequence[i]<min&&sequence[i]>0)
	{
		min=sequence[i];
		index = i;
	}
}
System.out.println(index);
}
}
