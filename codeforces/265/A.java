import java.util.Scanner;


public class codeforces {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner input =new Scanner(System.in);
   String s = input.nextLine();
   String t = input.nextLine();
   int i =0;
   int j =0;
   for( i= 0;i<=s.length();i++){
	   if((j==t.length()||(i==s.length()))){
		   System.out.println(i+1);
		   break;
	   }
		   
	   while(j<t.length()){
		   if(s.charAt(i)==t.charAt(j)){
			   j++;
			   break;
		   }
		   else j++;
	   }
	     if(j==t.length()){
		 if(s.charAt(i)!=t.charAt(j-1)){i--;
		 }
	 }
   }

}}