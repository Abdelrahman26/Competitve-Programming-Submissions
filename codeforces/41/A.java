import java.util.Scanner;
public class translation {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    String x =input.next();
    String y =input.next();
    if(x.length()!=y.length())
    {
    	System.out.println("NO");
		System.exit(0);
    }
    for(int i=0,j=x.length()-1;i<x.length();i++,j--)
    {
    	if(x.charAt(i)!=y.charAt(j))
    	{
    		System.out.println("NO");
    		System.exit(0);
    	}
    }
    System.out.println("YES");
	}

}
