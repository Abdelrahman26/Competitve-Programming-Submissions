import java.util.Scanner;
public class even {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    int count = 0 ;
    int n =input.nextInt();
    String[] x =new String [n];
    for(int i=0;i<n;i++)
    {
    	x[i]=input.next();
    }
    char p = x[0].charAt(1);
    char y = x[0].charAt(0);
    if(p==y)
    {
    	System.out.println("NO");
    	System.exit(0);
    }
    for(int i=0,j=n-1;i<n;i++,j--)
    {
    	if(x[i].charAt(i)!=y||x[i].charAt(j)!=y)
    	{
    		System.out.println("NO");
    		System.exit(0);
    	}
    	int k=0;
    	for( k=0;k<n;k++)
    	{
    		if(x[i].charAt(k)==p)count++;
    	}
    }
    if(count == n*n-(2*n)+1)System.out.println("YES");
    else System.out.println("NO");
   }

}
