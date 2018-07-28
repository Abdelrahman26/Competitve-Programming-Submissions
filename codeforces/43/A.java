import java.util.Scanner;
public class foot {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    String d="";
    int n =input.nextInt();
    int n1 = 1;
    int n2 = 0;
    input.nextLine();
    String x = input.nextLine();
    String y = "a";
    for(int i=1;i<n;i++)
    {
    	y = input.nextLine();
    	if(x.equals(y))
    	{
    		n1++;
    	}
    	else 
    	{
    		n2++;
    		 d =y;
    	}
    }
    if(n1>n/2)System.out.println(x);
    else System.out.println((n1>n2)?x:d);
	}

}
