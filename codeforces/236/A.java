import java.util.Scanner;

public class problemm {

	public static void main(String[] args) {
 Scanner input =new Scanner(System.in);
 String x =input.nextLine();
 String z ="";
 int count = 0;
 for (int i =0;i<x.length();i++){
	 z = x.substring(i,i+1);
	
	for (int j =0 ;j<i;j++){
		if( x.substring(j,j+1).equals(z)){count++;
		    break;
		}
		
	}
	 
	 
 }
 count = x.length()-count;
 if (count == 0)System.out.println("IGNORE HIM!");
 else  if (count%2==0)System.out.println("CHAT WITH HER!");

 else System.out.println("IGNORE HIM!");
 
}}