import java.util.Arrays;
import java.util.Scanner;


public class codeforces {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner input =new Scanner(System.in);
    int count =0;
    int [] x =new int [4];
    for(int i =0;i<x.length;i++){
    	x[i] =input.nextInt();
    }
    
    Arrays.sort(x);
    for(int i= 0;i<x.length-1;i++){
    	if(x[i] ==x[i+1])count++;
    }System.out.println(count);
	}

}