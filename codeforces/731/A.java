import java.util.Scanner;


public class startup {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
	Scanner input = new Scanner(System.in);
	int count = 0;
	int w =0;
	int q =0;
	int rem = 0;
	String x =input.nextLine();	
	for (int i=0;i<x.length();i++){
	if(i==0){ w =x.charAt(i);
	w = Math.abs(97-w);
	rem = Math.abs(26-w);
	 if (w>rem){count +=rem;}
	  else{ count +=w; }
	 }
	if (i==x.length()-1)break;
	 {w =x.charAt(i);
		  q =x.charAt(i+1);
		  w=Math.abs(w-q);
		  rem = Math.abs(26-w);
		  if (w>rem)count +=rem;
		  else count +=w;}        }
	      System.out.println(count);
	}

}