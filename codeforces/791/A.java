
import java.util.Scanner;

public class problemm {

	public static void main(String[] args) {
 Scanner input =new Scanner(System.in);
 int limak = input.nextInt(); 
 int jon   = input.nextInt();
 int years = 0 ;
 for (int i= 1;i!=0;i++){
	 limak = limak * 3;
	 jon   = jon   * 2;
	 years++;
	 if (limak>jon ){
		 break;
	 }
 }
 System.out.println(years);
	}}