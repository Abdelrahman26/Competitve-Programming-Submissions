import java.util.Arrays;
import java.util.Scanner;

public class problemm {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
Scanner input =new Scanner(System.in);
int [][] x=new int [5][5];
int p1 = 0;
int p2 = 0;
for (int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		x[i][j]=input.nextInt();
		if (x[i][j]==1){
			p1 = i;
			p2 =j ;
		}
	}
}
int stepsy = Math.abs(p1-2);
int stepsx = Math.abs(p2-2);
System.out.println(stepsy+stepsx  );
	


}}