import java.util.Scanner;


public class fff {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    int n =input.nextInt();
    int m =input.nextInt();
    int [] sum = {0,0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<m;i++)
    {
    	int x = input.nextInt();
    	int y = input.nextInt();
    	sum[y] += x;
    }
    int count = 0;
    int k = n;
    for(int j =10;j>0;j--)
    {
    	if(sum[j]!=0)
    	{
    	if(sum[j]<=k)
    	{
    		count += sum[j]*j;
    		k=k-sum[j];
    	}
    	else if(sum[j]>k)
    	{
    		count += k*j;
    		break;
    	}
       }
    }
    System.out.println(count);
	}

}
