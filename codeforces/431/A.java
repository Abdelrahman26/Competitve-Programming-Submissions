import java.util.Scanner;

public class proplemmmm {

	public static void main(String[] args) {
		
		// TODO Auto-generated method stub
Scanner input =new Scanner(System.in);

int n1 = input.nextInt();
int n2 = input.nextInt();
int n3 = input.nextInt();
int n4 = input.nextInt();
int count = 0;
String y =input.nextLine();
String x =input.nextLine();
for (int i= 0;i<x.length();i++){
 if (x.substring(i,i+1).equals(Integer.toString(1)))count =count+n1;
else if (x.substring(i,i+1).equals(Integer.toString(2)))count +=n2;
else if (x.substring(i,i+1).equals(Integer.toString(3)))count +=n3;
else if (x.substring(i,i+1).equals(Integer.toString(4)))count +=n4;
}
System.out.println(count);


}}