import java.util.Scanner;
public class visiting {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    int n =input.nextInt();
    int m =input.nextInt();
    int [] a =new int [n];
    int [] b =new int [n];
    boolean [] seq = new boolean[m+1];
    seq[0]=true;
    for(int i=0;i<n;i++)
    {
    	a[i]=input.nextInt();
    	if(a[0]!=0)
    	{
    		System.out.println("no");
    		System.exit(0);
    	}
    	b[i]=input.nextInt();
    //	if(a[n-1]<m)
    //	{
    	//	System.out.println("no");
    	//	System.exit(0);
    	//}
    	if(seq[a[i]]==true)
    	{
    		int j = a[i];
    		while(j<=b[i])
    		{
    			seq[j++]=true;
    		}
    	}
    }
    if(seq[m]==true)System.out.println("yes");
	else System.out.println("no");
	}

}
