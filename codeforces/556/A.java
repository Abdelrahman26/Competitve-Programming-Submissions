import java.util.Scanner;
public class cased {
	public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int n = input.nextInt();
    String x = input.next();
    int a = 0;
    int b = 0;
    for(int i=0;i<n;i++)
    {
    	if(x.charAt(i)=='0')a++;
    	else b++;
    }
    System.out.println(Math.abs(a-b));
	}

}
