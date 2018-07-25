import java.util.Scanner;


public class rated {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    int n =input.nextInt();
    int [] x =new int [n];
    int [] y =new int [n];
    for(int i=0;i<x.length;i++)
    {
    	x[i]=input.nextInt();
    	y[i]=input.nextInt();
    	if(x[i]!=y[i])
    	{
    		System.out.println("rated");
    		System.exit(0);
    	}
    }
    int max = x[0];
   //  int min = x[0];
    for(int i=0;i<x.length-1;i++)
    {
    	if(x[i+1]>x[i])
    	{
    		System.out.println("unrated");
    		System.exit(0);
    	}
    }
    System.out.println("maybe");
	}

}
