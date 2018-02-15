
import java.util.Scanner;

public class problemm {

	public static void main(String[] args) {
 Scanner input =new Scanner(System.in);
int n = input.nextInt();
int h =input.nextInt();
int count =0 ;
for(int i=0;i<n;i++){
	int nn =input.nextInt();
	if (nn<=h){
		count++;
	}
	else {count +=2;}
}System.out.println(count);
	}}