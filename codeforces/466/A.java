import java.util.Scanner;


public class cheap {
	public static void main(String[] args) {
	Scanner input =new Scanner(System.in);
	int n =input.nextInt();int m =input.nextInt();int a =input.nextInt();int b =input.nextInt();
	System.out.println(Math.min(n*a,(n/m*b+Math.min(n%m*a,b))));
}

}
