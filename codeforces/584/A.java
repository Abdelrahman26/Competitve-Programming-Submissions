import java.util.Scanner;
import java.math.BigInteger;
public class olesa {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    int n = input.nextInt();
    int t = input.nextInt();
    if(n==1&&t==10)System.out.println(-1);
    else 
    {
    	System.out.print(t);
    	if(t==10)
    	{
    		for(int i=0;i<n-2;i++)
    		{
    			System.out.print(0);
    		}
    	}
    	else 
    		for(int i=0;i<n-1;i++)
    		{
    			System.out.print(0);
    		}
    }
	}

}
