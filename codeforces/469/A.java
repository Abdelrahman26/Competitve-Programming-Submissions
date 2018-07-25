import java.util.Scanner;


public class wanaa {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    int n= input.nextInt();
    boolean [] seq = new boolean [n+1];
    int m = input.nextInt();
    int [] x =new int [m];
    seq[0]=true;
    for(int i=0;i<x.length;i++)
    {
    	x[i]=input.nextInt();
    	if(seq[x[i]]==false)seq[x[i]]=true;
    }
    int m2 = input.nextInt();
    int [] y =new int [m2];
    for(int i=0;i<y.length;i++)
    {
    	y[i]=input.nextInt();
    	if(seq[y[i]]==false)seq[y[i]]=true;
    }
    for(int i=0;i<=n;i++)
    {
    	if(seq[i]==false)
    	{
    		System.out.println("Oh, my keyboard!");
    		System.exit(0);
    	}
    }
    System.out.println("I become the guy.");
    
	}

}
