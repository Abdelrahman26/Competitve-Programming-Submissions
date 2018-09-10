import java.util.Scanner;
public class FUNCTION {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    int n = input.nextInt();
    long min = Integer.MAX_VALUE;
    long max = Integer.MIN_VALUE;
    long miny = Integer.MAX_VALUE;
    long maxy = Integer.MIN_VALUE;
    for(int i=0;i<n;i++)
    {
    	long x = input.nextInt();
    	if(x<min)min = x ;
    	if(x>max)max = x ;
        long y= input.nextInt();
        if(y<miny)miny = y ;
        if(y>maxy)maxy = y ;
    }
    long q = Math.max(Math.abs(max-min), Math.abs(maxy-miny));
    System.out.println(q*q);
	}

}
