import java.util.Scanner;
public class karen {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    int n= input.nextInt();
    int m= input.nextInt();
    int q =input.nextInt();
    int [] partial = new int [200002];
    int count = 0;
    int [] elements =new int [200002];
    for(int i=0;i<n;i++)
    {
    	partial[input.nextInt()]++;
    	partial[input.nextInt()+1]--;
    }
    for(int i=1;i<=200000;i++)
    {
    	partial[i] += partial[i-1];
    	if(partial[i]>=m)
    		elements[i] =elements[i-1]+1;
    	else elements[i] =elements[i-1];
    }
    for(int i=0;i<q;i++)
    {
    	int x =input.nextInt(); int y =input.nextInt();
    	System.out.println(elements[y]-elements[x-1]);
    }
	}

}
