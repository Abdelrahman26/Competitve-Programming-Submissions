import java.util.Scanner;


public class bachgold {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    int x =input.nextInt();
    int v = x/2;
    int r = x%2;
    System.out.println(v);
    for(int i=1;i<v;i++)System.out.print(2+" ");
    if(r==1)System.out.println(3);
    else System.out.println(2);
	}

}
