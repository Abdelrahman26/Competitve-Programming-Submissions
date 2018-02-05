import java.util.Scanner;


public class Astring {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int x= input.nextInt();
		{
	  for (int i=1 ; i <= x+1 ; i++ ){
		  String w= input.nextLine();
		  if (w.length()>10){
			  char a = w.charAt(0); 
			  char b = w.charAt(w.length()-1);
			  int  c = w.length()-2;
			  System.out.print(a);
			  System.out.print(c);
			  System.out.print(b);
			   System.out.println();
		  }
		  else 
			  System.out.println(w);
	  }
			
	}}}