import java.util.Scanner;
public class Function {
	public static void main(String[] args)  {
		Scanner input =new Scanner(System.in);
        int n =input.nextInt();
        input.nextLine();
        for(int j=0;j<n;j++)
        {
        	boolean s=false ,c=false,d=false;
            int S = 0,C=0,D=0;
        	String x =input.nextLine();
        	char [] r =x.toCharArray();
        	for(int i=0;i<x.length();i++)
        	{
        		 if(r[i]>=65&&r[i]<=90)
         		{
         			C++;
         			c = true;
         		}
        	    else if(r[i]>=97&&r[i]<=122)
        		{
        			S++;
        			s = true;
        		}
        		else 
        		{
        			D++;
        			d = true;
        		}
        	}
   
        	if(s==true&&c==true&&d==true){
        		System.out.println(x);
        	}
        	else if (D==x.length())
        	{
        		r[0]='a';r[1]='B';
        		x = new String(r);
        		System.out.println(x);
        	}
        	else if (C==x.length())
        	{
        		r[0]='a';r[1]='7';
        		x = new String(r);
        		System.out.println(x);
        	}
        	else if (S==x.length())
        	{
        		r[0]='7';r[1]='B';
        		x = new String(r);
        		System.out.println(x);
        	}
        	else if (c==true&&d==true)
        	{
        		int q = Math.max(C, D);
        		if(q==C)
        		{
        			int k = 0;
        			while(true)
        			{
        				if(r[k]>=65&&r[k]<=90)
        				{
        					r[k]='f';
        					x = new String(r);
        	        		System.out.println(x);
        	        		break;
        				}
        				k++;
        			}
        		}
        		else 
        		{
        			int k = 0;
        			while(true)
        			{
        				if(r[k]<65||r[k]>90)
        				{
        					r[k]='f';
        					x = new String(r);
        	        		System.out.println(x);
        	        		break;
        				}
        				k++;
        			}
        		}
        	}
        	else if (c==true&&s==true)
        	{
        		int q = Math.max(C, S);
        		if(q==C)
        		{
        			int k = 0;
        			while(true)
        			{
        				if(r[k]>=65&&r[k]<=90)
        				{
        					r[k]='7';
        					x = new String(r);
        	        		System.out.println(x);
        	        		break;
        				}
        				k++;
        			}
        		}
        		else 
        		{
        			int k = 0;
        			while(true)
        			{
        				if(r[k]>=97&&r[k]<=122)
        				{
        					r[k]='7';
        					x = new String(r);
        	        		System.out.println(x);
        	        		break;
        				}
        				k++;
        			}
        		}
        	}
        	else if (d==true&&s==true)
        	{
        		int q = Math.max(D, S);
        		if(q==S)
        		{
        			int k = 0;
        			while(true)
        			{
        				if(r[k]>=97&&r[k]<=122)
        				{
        					r[k]='Q';
        					x = new String(r);
        	        		System.out.println(x);
        	        		break;
        				}
        				k++;
        			}
        		}
        		else 
        		{
        			int k = 0;
        			while(true)
        			{
        				if(r[k]<97||r[k]>122)
        				{
        					r[k]='Q';
        					x = new String(r);
        	        		System.out.println(x);
        	        		break;
        				}
        				k++;
        			}
        		}
        	}
        	
        }
	}

}