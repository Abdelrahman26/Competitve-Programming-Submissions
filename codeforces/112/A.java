import java.util.Scanner;

public class problemm {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
Scanner input =new Scanner(System.in);
String n = input.nextLine();
String c = input.nextLine();
n=n.toLowerCase();
c=c.toLowerCase();
int x = n.compareTo(c);
	
	if (x>0){
		System.out.println(1);
	}
	else if (x<0){
		System.out.println(-1);
	}
	else 
		System.out.println(0);

}}