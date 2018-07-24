import java.util.Scanner;
public class hard {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    int n =input.nextInt();
    if(n==0)
    {
    	System.out.println(1);
    	System.exit(0);
    }
    int [] x =new int [4];
    x[0]=6;x[1]=8;x[2]=4;x[3]=2;
    int q = n%4;
    System.out.println(x[q]);
	}
}
