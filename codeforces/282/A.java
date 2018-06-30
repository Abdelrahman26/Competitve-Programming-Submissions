import java.util.Scanner;


public class bit {
	public static void main(String[] args) {
Scanner input =new Scanner(System.in);
int n = input.nextInt();
String [] x = new String[n];
int count = 0;
for(int i=0;i<n;i++)
{
	x[i]=input.next();
	if(x[i].equals("++X")||x[i].equals("X++"))count++;
	else count--;
}
System.out.println(count);
	}

}
