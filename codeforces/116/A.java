import java.util.Scanner;

public class problemm {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
Scanner input =new Scanner(System.in);
int stops =input.nextInt();
int min   = 0 ;
int total = 0 ;
for (int i=0 ;i<stops;i++){
	int e =input.nextInt();
	int n =input.nextInt();
	 total =total  -e+n;
	 if (total >min){
		 min = total ;
	 }
}
System.out.println(min);

	


}}