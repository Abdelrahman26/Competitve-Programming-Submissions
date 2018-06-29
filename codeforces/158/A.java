import java.util.Scanner;


public class nextround {
	public static void main(String[] args) {
		Scanner input =new Scanner( System.in);
		int n = input.nextInt();
		int k = input.nextInt();
		int [] x =new int [n];
		int count =0;
		for(int i=0;i<n;i++)
		{
			x[i]=input.nextInt();
		}
		int m = x[k-1];
		for(int i=0;i<n;i++)
		{
			if(x[i]>=m&&x[i]>0)count++;
		}
System.out.println(count);
	}

}
