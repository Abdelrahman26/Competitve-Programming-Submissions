import java.util.Scanner;
public class Function {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
  
    int n =input.nextInt();
    int u = 0;
    char[]t = new char[n];
    int [] x =new  int [n];
    int [] seq=new int [101];
    boolean [] w = new boolean[101];
    int count =0;
    int p = Integer.MIN_VALUE;
    for(int i=0;i<n;i++)
    {
    	x[i] = input.nextInt();
        seq[x[i]]++;
        if(seq[x[i]]>p)
        	{
        	p= seq[x[i]];
        	u = x[i];
        	}
    }
    for(int i=0;i<101;i++)
    {
    	if(seq[i]==1)
    		{
    		count++;
    		w[i]=true;
    		}
    	//if(seq[i]>p)
    	//{
    	//	p = i;
    	//	System.out.println(p);
    	//}
    }
  if(count == 0)
    {
    	int y = 0;
    	System.out.println("YES");
    	while(y<n)
    	{
    		y++;
    		System.out.print("A");
    	}
    }
    else if(count%2==1&&p<3)
    {
    	System.out.println("NO");
    }
    else if(count%2==1)
    {
    	int l = 0;
    	System.out.println("YES");
    	for(int j=0;j<n;j++)
    	{
    		if(l<count/2)
    		{
    			if(w[x[j]]==true&&l<count/2)
    			{
    				t[j]  = 'A';l++;
    			}
    			else t[j]='B';
    			
    		}
    		else t[j] = 'B';
    	}
	for(int i=0;i<n;i++)
	{
		if(x[i]==u)
		{
			 t[i] = 'A';
			String ff = new String(t);
			System.out.println(ff);
			break;
		}
		
	}
     
    }
    else
    {
    	int l = 0;
    	System.out.println("YES");
    	for(int j=0;j<n;j++)
    	{
    		if(l<count/2)
    		{
    			if(w[x[j]]==true&&l<count/2)
    			{
    				t[j]  = 'A';l++;
    			}
    			else t[j]='B';
    			
    		}
    		else t[j] = 'B';
        }
    String h = new String(t);System.out.println(h);
    }    	
   
    	
  
    
	}

}
