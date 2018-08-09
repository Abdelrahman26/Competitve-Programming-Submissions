import java.util.Scanner;
public class ff {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    int qq = input.nextInt();
    input.nextLine();
    String n = input.next();
    char [] r  = n.toCharArray();
    char [] t =  new char [n.length()];
    if(r.length%2==1)
    {
    	int b = r.length/2;
    	t[b]  = r[0];
    	int q = 0;
    	for(int i=1,j=1;i<r.length;i++)
    	{
    		if(i%2==1)
    		{
    		t[b-j]=r[i];
    		q++;
    		}
    		else 
    		{
    			t[b+j]=r[i];
    			q++;
    		}
    		if(q==2)
    		{
    			q=0;
    			j++;
    		}
    	}
    }
    else 
    {
    	int b = r.length/2;
    	b--;
    	t[b]  = r[0];
    	int q = 0;
    	for(int i=1,j=1;i<r.length;i++)
    	{
    		if(i%2==1)
    		{
    		t[b+j]=r[i];
    		q++;
    		}
    		else 
    		{
    			t[b-j]=r[i];
    			q++;
    		}
    		if(q==2)
    		{
    			q=0;
    			j++;
    		}
    	}
    }
       for(int i=0;i<r.length;i++)System.out.print(t[i]);
	}

}
