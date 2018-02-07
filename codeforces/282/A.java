import java.util.Scanner;

public class nextround {

	public static void main(String[] args) {
Scanner input = new Scanner(System.in);
int x= 0 ;
int n = input.nextInt();
  
for(int i=0;i<n+1;i++){
	String q = input.nextLine();
	if ((q.equals("++X"))||(q.equals("+X+"))||(q.equals("X++"))){
		x++;
	}
	if ((q.equals("-X-"))||(q.equals("--X"))||(q.equals("X--"))){
		x--;}
}
System.out.println(x);
		
		
	

}}