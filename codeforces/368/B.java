import java.util.Scanner;
public class serga {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    int n =input.nextInt();
    int m =input.nextInt();
    int [] x =new int [n];
    for(int i=0;i<n;i++)
    {
        x[i] = input.nextInt();
    }
    boolean [] seq = new boolean [100002];
    int [] sum = new int [n+1];
    for(int i=n-1;i>=0;i--)
    {
    if(seq[x[i]]==true)
    {
    	 sum[i] =sum [i+1];
    }	                
    else
    	{
         sum [i] =sum[i+1]+1;
    	 seq[x[i]]=true;
    	}
   
    }
    for(int i=1;i<=m;i++)
    {
    	int w =input.nextInt();
    	System.out.println(sum[w-1]);
    }
	}

}
