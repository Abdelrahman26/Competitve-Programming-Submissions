import java.util.Scanner;
public class FUNCTION {
	public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int n = input.nextInt();
    int [][] x = new int [n][n];
    int ones  = 0 ;
    int count = 0;
    for(int i=0;i<n;i++)
    {
       for(int j = 0;j<n;j++)
       {
    	x[i][j] = input.nextInt();
    	if(x[i][j]==1)ones++;
       }
    }
    int s = 0 ; 
    int t = 0 ;
    int u = 0 ;
    for(int i=0;i<n;i++)
    {
       for(int j = 0;j<n;j++)
       {
    	int q = x[i][j];
    	if (q==1)continue;
    	u = 0;
    	 for(t =0;t<n;t++)//j
    	 {
    		 if(t!=j&&u==0)
           for(s =0 ;s<n;s++)
    	   {
    		  if(s!=i)
    		  {
    			  if(x[s][j]+x[i][t]==q)
    			  {
    				  count++;
    				  u=1;
    				  break ;
    			  }
    			 
    		  }
    	  }
       }
    }
  }    if(count+ones==n*n)System.out.println("Yes");
    else System.out.println("No");
 }
}
