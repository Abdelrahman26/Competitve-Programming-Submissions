import java.util.Arrays;
import java.util.Scanner;
import java.math.*;

public class codeforces2 {
	public static void main(String[] args) {
		Scanner input =new Scanner(System.in);
	    int n =input.nextInt();
	    long x =input.nextLong();
	    int cry = 0;
	    char[]y=new char[n];
	    int []z=new int  [n];
	    for(int i=0;i<n;i++){
	    	y[i]=input.next().charAt(0);
	    	z[i]=input.nextInt();
	    	if(y[i]=='+'){
	    		x=x+z[i];
	    	}
	    	else {
	    		if (z[i]<=x)x -=z[i];
	    		else cry++;
	    	}
	    }System.out.println(x);
	    System.out.println(cry);

	}}


