import java.util.Scanner;

public class a4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
     Scanner input = new Scanner(System.in);
     int w = input.nextInt();
     if ( (w%2==0) &&(w<=100)&&(w>=1)&&(w!=2) ){
    	 System.out.println("yes");
     }
     else {
    	 System.out.println("no");
     }
}}