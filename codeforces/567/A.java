import java.util.Scanner;


public class line {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n =input.nextInt();
		long [] x =new long[n];
		for(int i=0;i<x.length;i++)
		{
			x[i]=input.nextLong();
		}
		for(int i=0;i<x.length;i++)
		{
			long mx =Math.max(Math.abs(x[i]-x[0]), Math.abs(x[i]-x[x.length-1]));
			long mn ;
			if(i==0)          mn=Math.abs(x[i]-x[i+1]);
	   else if(i==x.length-1) mn=Math.abs(x[i]-x[i-1]);
	   else
	   {
		   mn =Math.min(Math.abs(x[i]-x[i-1]), Math.abs(x[i]-x[i+1]));
	   }
			System.out.println(mn+" "+mx);
		}
	}

}