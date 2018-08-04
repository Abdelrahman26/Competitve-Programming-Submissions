import java.util.Scanner;
public class probleam {
	public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int n =input.nextInt();
    int m =input.nextInt();
    int count =0;
    int h = 0;
    for(int i=0;i<n;i++)
    {
    	int t =input.nextInt();
    	count += t ;
    	System.out.println(count/m);
    	count %=m;
    }
	}

}