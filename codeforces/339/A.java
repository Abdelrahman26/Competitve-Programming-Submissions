import java.util.Scanner;

public class problemm {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
Scanner input =new Scanner(System.in);
String x= input.nextLine();
String sum1= "";
String sum2= "";
String sum3= "";
String sum = "";
for (int i= 0; i<x.length();i=i+2){
	String sub=x.substring(i,i+1);
	if (sub.equals("1")){sum1 =sum1 +"+"+sub ;}
	else if (sub.equals("2")){sum2 =sum2 +"+"+sub ;}
	else if (sub.equals("3")){sum3 =sum3 +"+"+sub ;}
}
if (x.length()>1){
 sum =sum1+sum2+sum3;
 System.out.println(sum.substring(1));}
else {System.out.println(x);}

}}