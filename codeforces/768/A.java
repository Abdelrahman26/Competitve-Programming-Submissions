import java.util.Arrays;
import java.util.Scanner;


public class jonsnow {
	public static void main(String[] args) {
		Scanner input =new Scanner(System.in);
	 
		int n= input.nextInt();
		int [] x =new int [n];
		int k= 0;
		for(int i=0;i<n;i++)
		{
			x[i]=input.nextInt();
		}
		Arrays.sort(x);
		for(int i=1;i<n-1;i++)
		{
			if(x[i]>x[0]&&x[x.length-1]>x[i])k++;
		}
		System.out.println(k);

}
}
