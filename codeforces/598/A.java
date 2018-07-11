import java.util.Scanner;


public class sum {
	public static void main(String[] args) {
Scanner input = new Scanner(System.in);
int n = input.nextInt();
for(int i=0;i<n;i++)
{
	long x = input.nextInt();
	int count = 0;
	int j = 0;
	while(Math.pow(2,j)<=x)
	{
		count += Math.pow(2,j);
		j++;
	}
	 long w =(x*(x+1)/2)-2*count;
	 System.out.println(w);
}


}

}
