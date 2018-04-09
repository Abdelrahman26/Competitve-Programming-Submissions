import java.util.Scanner;


public class codeforces4 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
Scanner input =new Scanner(System.in);
String a =input.nextLine();
String b =input.nextLine();
if(a.equals(b))
	System.out.println(-1);
else if(a.length()>b.length())System.out.println(a.length());
else System.out.println(b.length());
	}

}