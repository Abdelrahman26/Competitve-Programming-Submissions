import java.util.Scanner;

public class nextround {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
        Scanner input =new Scanner(System.in);
        
        int w = 0 ;
        int q = 0 ;
       long n = input.nextLong();
       long m = input.nextLong();
       long a = input.nextLong();
     
      long x = n/a;
       long z = n%a ;
       if (z!=0){
    	   q = 1 ;
       }   
       long y = m/a;
       long o = m%a;
       if (o!=0){
    	    w =1 ;
       }
 	 long l =x+q;
 	   long t =y+w;
 	   System.out.println(l*t);

}}