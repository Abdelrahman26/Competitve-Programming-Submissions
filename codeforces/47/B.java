import java.util.Scanner;


public class dd {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    int a=0,b=0,c=0;
    for(int i=0;i<3;i++)
    {
    	String q  = input.nextLine();
    	String w = q.substring(0,1);
    	String w2= q.substring(2);
    	if (q.substring(1,2).equals(">"))
    	{
    	if(w.equals("A"))a++;
    	else if (w.equals("B"))b++;
    	else if (w.equals("C"))c++;
    	}
    	else 
    	{
    		if(w2.equals("A"))a++;
        	else if (w2.equals("B"))b++;
        	else if (w2.equals("C"))c++;	
    	}
    }
    if(a==b&&a==c)
    {
    	System.out.println("Impossible");
    	System.exit(0);
    }
    
    if(a>b&&a>c)
    {
    	 int r = Math.min(b,c);
    	 if(r==b)
    		 {
    		  System.out.print("B");
    		  System.out.print("C");
    		 }
    	 else{ System.out.print("C");
    	       System.out.print("B");
    	    }
    	
    	 
    	System.out.print('A');
    }
    else if (b>a&&b>c)
    {
    	 int r = Math.min(a,c);
    	 if(r==a)
    		 {
    		  System.out.print("A");
    		  System.out.print("C");
    		 }
    	 else{ System.out.print("C");
    	       System.out.print("A");
    	    }
    	
    	System.out.print('B');
    }
    else 
    {
    	 int r = Math.min(b,a);
    	 if(r==b)
    		 {
    		  System.out.print("B");
    		  System.out.print("A");
    		 }
    	 else{ System.out.print("A");
    	       System.out.print("B");
    	    }
    	System.out.print('C');
    }
    }

}
