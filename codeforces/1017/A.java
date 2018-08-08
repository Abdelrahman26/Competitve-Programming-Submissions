import java.util.Scanner;
public class ff {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    int  n =input.nextInt();
    int count = 1;
    int sum = 0;
    int max =0;
    for(int i=0;i<n;i++)
    {
    	sum = 0;
    	for(int j=0;j<4;j++)
    	{
    		sum += input.nextInt();
    	}
    	if(i==0)max = sum ;
    	else {
    		if(sum>max)count++;
    	}
    }
    System.out.println(count);
	}

}
