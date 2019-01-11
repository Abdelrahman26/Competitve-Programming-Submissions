import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner input =new Scanner(System.in);
		String e   = input.nextLine();
		char [] x = new char[e.length()];
		x = e.toCharArray();
		int rem=0,k=0,result=0;
		for(int i=0;i<x.length;i++)
		{
			if(x[i]=='['&&rem==0)rem=1;
			else if(x[i]==':'&&rem==1)
				{
				rem=2;
				k=i;
				}
			else if(x[i]==':'&&rem==2)rem=3;
			else if(x[i]==']'&&rem==3)rem=4;
		}
		if(rem!=4)
		{
			System.out.println(-1);
			return ;
		}
		rem=0;
		for(int i=x.length-1;i>k;i--){
			if(x[i]==']'&&rem==0){
				rem=1;
			}
			else if(x[i]==':'&&rem==1){
				rem=2;
			}
			if(x[i]=='|'&&rem==2){
				result++;
			}
		}
		System.out.println(4+result);

	}

}
