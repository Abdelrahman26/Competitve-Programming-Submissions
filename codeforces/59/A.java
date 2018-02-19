import java.util.Scanner;

public class proplemmmm {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
Scanner input =new Scanner(System.in);
int lower =0;
int upper =0;
String x =input.nextLine();
for (int i=0;i<x.length();i++){
	char y =x.charAt(i);
	if (java.lang.Character.isLowerCase(y))lower++;
	else upper++;
}	
if(lower>upper)	System.out.println(x.toLowerCase());
else if (lower<upper)System.out.println(x.toUpperCase());
else System.out.println(x.toLowerCase());

	}

}