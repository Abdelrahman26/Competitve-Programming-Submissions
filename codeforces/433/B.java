import java.math.BigInteger;
import java.util.Arrays;
import java.util.Scanner;


public class miri {
	public static void main(String[] args) {
			Scanner input =new Scanner(System.in);
			int n =input.nextInt();
			//int [] A = new int[n+1];
			Long  [] A = new Long[n+1];
			long   b   = 0;
			A[0]       = b;
			for(int i=1;i<=n;i++)
			{
				A[i]=input.nextLong();
			}
			long [] prifix_sum = new long[n+1];
			for(int i=1;i<=n;i++)
			{
				if(i==1)prifix_sum[i]=A[i];
				else 
				prifix_sum[i]=prifix_sum[i-1]+A[i];
			}
			Arrays.sort(A);
			long []prifix_sum2 = new long[n+1];
			for(int i=1;i<=n;i++)
			{
				if(i==1)prifix_sum2[i]=A[i];
				else 
				prifix_sum2[i]=prifix_sum2[i-1]+A[i];
			}
			int m = input.nextInt();
		
			for(int i=0;i<m;i++)
			{
				int type =input.nextInt();
			 int 	l    =input.nextInt();
			 int	r    =input.nextInt();
			
			long h =0;
				if(type==1)
				{
				h=	prifix_sum[r]-prifix_sum[l-1];
					System.out.println(	h);
				}
				else if(type==2)
				{
					 h  = prifix_sum2[r]-prifix_sum2[l-1];
					 System.out.println(h);
					 }
			}

	}

}
