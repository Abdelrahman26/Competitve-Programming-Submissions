import java.util.Scanner;

public class nextround {

	public static void main(String[] args) {
Scanner input = new Scanner(System.in);
String x =input.nextLine();
String z= "yes";
for (int i = 0 ;i<x.length();i++){
	char y = x.charAt(i);
	
	if(y=='0'){
		if ((x.length()-(i+1))>=6){
		if (x.substring(i,i+7).equals("0000000")){
			System.out.println("YES");
			z="non";
			break;
		}
		}
	}
	else if (y=='1'){
		if((x.length()-(i+1))>=6){
		if (x.substring(i,i+7).equals("1111111")){
			System.out.println("YES");
			z="non";
			break;
		}
	}}
}
if (z=="yes")
	System.out.println("NO");

	


}}