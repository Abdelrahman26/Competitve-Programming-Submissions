
import java.util.Scanner;

public class proplemmmm {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
Scanner input =new Scanner(System.in);
int n =input.nextInt();
int []x =new int[n];
for (int i=0;i<n;i++){
	x[i]=input.nextInt();
}

int grops =1;
for (int i=0;i<n-1;i++){
	if (x[i]==x[i+1]){
		}
		else grops++;
	}
System.out.println(grops);
	}

}