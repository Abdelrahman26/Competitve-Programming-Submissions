import java.util.Scanner;
public class seq {
public static void main (String[] args){
	Scanner input = new Scanner(System.in);
	int a =input.nextInt();int b =input.nextInt();int c =input.nextInt();
    if(a==b)System.out.println("YES");
    else if ((b>a&&c>0)||(a>b&&c<0))
    {
    	if((a-b)%c==0)System.out.println("YES");
    	else System.out.println("NO");
    }
	else System.out.println("NO");
}
}
