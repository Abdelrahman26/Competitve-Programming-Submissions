import java.util.Scanner;
public class task {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    String h = input.next();
    String q = h.toLowerCase();
    input.nextLine();
    for(int i=0;i<h.length();i++)
    {
    	char c =q.charAt(i);
    	if(c=='a'||c=='o'||c=='y'||c=='e'||c=='u'||c=='i'){}
    	else 
    	System.out.print("."+c);
    }
	}

}
