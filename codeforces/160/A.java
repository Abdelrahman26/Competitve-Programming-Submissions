import java.util.Arrays;
import java.util.Scanner;


public class Twins {
	public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int n    =input.nextInt();
    int [] x =new int[n];
    int sum  = 0;
    int count = 0;
    int k =0;
    for(int i =0;i<n;i++)
    {
    	x[i]=input.nextInt();
    	sum +=x[i];
    }
    Arrays.sort(x);
    sum = (sum/2)+1;
    for(int i=x.length-1;count<sum;i--)
    {
    	count +=x[i];
    	k++;
    }
    System.out.println(k);
	}

}
