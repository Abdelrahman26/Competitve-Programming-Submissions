import java.util.Scanner;


public class ggg {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
 Scanner input =new Scanner(System.in);
 int n =input.nextInt();
 int easy = 0;
 int hard = 0;
 for(int i=0;i<n;i++)
 {
	 int r =input.nextInt();
	 if (r==1)hard++;
 }
 if(hard>0)System.out.println("HARD");
 else System.out.println("EASY");
	}

}
