import java.util.Scanner;

public class problemm {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
Scanner input =new Scanner(System.in);
int count =0;
int n =input.nextInt();
String o =input.nextLine();
String x =input.nextLine();

for (int i=0 ;i<n-1;i++){
	if (x.charAt(i)==x.charAt(i+1)){
		count ++;
	}
}
System.out.println(count);

	


}}