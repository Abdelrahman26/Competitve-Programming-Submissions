import java.util.Arrays;
import java.util.Scanner;
import java.math.*;

public class codeforces2 {
	public static void main(String[] args) {
		Scanner input =new Scanner(System.in);
	     int x = 0;
	     int g =0;
	     String y =input.nextLine();
	     char [] z =new char [1000];
	    	 for (int i=0;i<y.length();i++){
	    		if((y.charAt(i)<123)&&(y.charAt(i)>96)){
	    			z[g]=y.charAt(i);
	    			g++;
	    		}
	    	 }
	    	 Arrays.sort(z);
	    	 
	    	 if(z.length==0)x=0;
	    	 else { for (int i=0;i<z.length-1;i++){
	    		 if (z[i]!=z[i+1])x++;
	    	 }
	    	 System.out.println(x);

	}}}