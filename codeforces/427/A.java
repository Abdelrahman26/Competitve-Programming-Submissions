import java.util.Scanner;

public class proplemmmm {

	public static void main(String[] args) {
		
		// TODO Auto-generated method stub
Scanner input =new Scanner(System.in);
int n = input.nextInt();
int untreated = 0;
int office = 0;
for(int i= 0;i<n;i++){
	int x =input.nextInt();
	if (x!=-1)office +=x;
	else if (x==-1&&office>0)office--;
	else if (x==-1&&office==0)untreated ++;
}
System.out.println(untreated );
	}}