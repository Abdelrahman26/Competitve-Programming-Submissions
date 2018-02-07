import java.util.Scanner;

public class nextround {

	public static void main(String[] args) {
Scanner input = new Scanner(System.in);
String x = input.nextLine();
String y = "";
String z ="" ;
z =  x.toLowerCase();

for (int i= 0; i<x.length();i++){
	if( (z.charAt(i)=='a')||(z.charAt(i)=='o')||(z.charAt(i)=='i')||(z.charAt(i)=='u')||(z.charAt(i)=='y')||(z.charAt(i)=='e')){
		
	}
	else {
		
		y = y+'.'+ z.substring(i,i+1);
	}
}
System.out.println(y);
}}