import java.util.Scanner;
public class even {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    long n =input.nextLong();
    long k= input.nextLong();
    long m =n/2; if(n%2!=0)m +=1;
    if(k<=m)System.out.println(k+(k-1));
    else{ System.out.println(2*(k-m));
    }
	}

}
