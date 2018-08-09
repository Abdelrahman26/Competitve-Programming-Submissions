import java.util.Scanner;
public class ff {
	public static void main(String[] args) {
		Scanner input =new Scanner(System.in);
    int n =input.nextInt();
    int [] x =new int [n];
    for(int i=0;i<n;i++)x[i]=input.nextInt();
    int max = 0,min=0,min2=0,count=0;
    for(int i=0;i<n;i++)
    {
    	min = x[i];
    	min2= x[i];
    	for(int j=i;j<x.length;j++)
    	{
    		
    		if(j+1<x.length)
    		{
    			if(x[j+1]<=min)
    			{
    				min = x[j+1];
    				count++;
    			}
    			else break;
    		}
    	}
    	for(int k=i;k!=0;k--)
    	{
    		if(x[k-1]<=min2)
    		{
    			count++;
    			min2 = x[k-1];
    		}
    		else break;
    	}
    	if(count>max)
    		max = count;
    	count = 0;
    }
    System.out.println(max+1);
	}

}

    
    
