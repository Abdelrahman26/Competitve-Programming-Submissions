import java.util.Scanner;
public class Function {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    long l = input.nextLong();
    long r = input.nextLong();
    if(((r-l+1)<=3*100000)&&(r-l)%2==1)
    {
    	System.out.println("YES");
    	for(long i=l;i<r;i +=2)
    	{
    		System.out.println(i+" "+(i+1));
    	}
    }
    else System.out.println("NO");
	}

}
