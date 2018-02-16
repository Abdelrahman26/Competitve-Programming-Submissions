import java.util.Scanner;

public class problemm {

	public static void main(String[] args) {
 Scanner input =new Scanner(System.in);
 int anton =0 ;
 int  danik = 0;
 int n =input.nextInt();
 String x =input.nextLine();
 String nn =input.nextLine();
 for (int i= 0;i<n;i++){
 char y =nn.charAt(i);
 if (y=='A') anton ++;
 if (y=='D') danik ++;
 }
 if ( anton> danik )System.out.println("Anton");
 else if ( anton< danik )System.out.println("Danik");
 else System.out.println("Friendship");
	}}