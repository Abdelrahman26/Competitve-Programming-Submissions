import java.util.Scanner;
import java.math.*;

public class codeforces2 {
	public static void main(String[] args) {
		Scanner input =new Scanner(System.in);
	       int n =input.nextInt();
	       int t =input.nextInt();
	       int k =input.nextInt();
	       int d =input.nextInt();
	       int g = 0;
	       int k2 = 0;
	       int t2 = 0;
	       int t3 = d;
	       g = n /k;
	       if (n%k!=0){
	    	   g++;
	       }
	       g =g*t ;
	       while(k2<n){
	    	 
	    	  if (t2>=t3){
	    		   t3 =t3 + t ;
	    		   k2 = k2 + k ;
	       }
	    	  else{
	    		   t2 =t2 + t ;
	    		   k2 = k2 + k ;
	    	   }
	       }
	    	  int g2 =0;
	    	  if (t2>t3) g2=t2;
	    	  else g2 = t3 ;
	    	  if (g>g2)System.out.println("YES");
	    	  else System.out.println("NO");
	
	

	}}