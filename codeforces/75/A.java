import java.util.Scanner;


public class zero {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    int x =input.nextInt();
    int y =input.nextInt();
    int z = x + y;	
    int count1 = 1;
    int count2 = 1;
    int count3 = 1;
   String a = Integer.toString(x);for(int i=0;i<a.length();i++)if(a.charAt(i)=='0')count1=count1*10;
   String b = Integer.toString(y);for(int i=0;i<b.length();i++)if(b.charAt(i)=='0')count2=count2*10;
   String c = Integer.toString(z);for(int i=0;i<c.length();i++)if(c.charAt(i)=='0')count3=count3*10;
   x = x%count1 + x/count1;
   y = y%count2 + y/count2;
   z = z%count3 + z/count3;
  if (z == x + y)System.out.println("YES");
  else System.out.println("NO");
   
	}

}
