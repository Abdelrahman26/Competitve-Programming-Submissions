import java.util.Arrays;
import java.util.Scanner;

public class problemm {

	public static void main(String[] args) {
 Scanner input =new Scanner(System.in);
 int x   =  input.nextInt();
 int []y =  new int [x];
 for (int i =0;i<x;i++){
	 y[i] =input.nextInt();
 }
Arrays.sort(y);
for(int i =0;i<x;i++){
	System.out.print(y[i]+" ");
}
 	
	}}