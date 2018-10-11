import java.util.Scanner;


public class Main {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    long n =input.nextInt();
    long s,a,b,c;
    long h = 0;
    for(int i=0;i<n;i++)
    {
    	s = input.nextInt();
    	a = input.nextInt();
    	b= input.nextInt();
    	c = input.nextInt();
    	long k = s/c;
    	long count = k/a;
    	count *= b;
    	 h = count + k;
    	 System.out.println(h);
    }
    
	}

}
