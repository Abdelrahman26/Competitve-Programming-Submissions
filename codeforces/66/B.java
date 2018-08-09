import java.util.Scanner;
import java.io.PrintWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException ;
import java.util.StringTokenizer;
public class ff {
	public static void main(String[] args) throws IOException{
		FastReader read =new FastReader();
    int n =read.nextInt();
    int [] x =new int [n];
    for(int i=0;i<n;i++)x[i]=read.nextInt();
    int max = 0,min=0,min2=0,count=0;
    for(int i=0;i<n;i++)
    {
    	min = x[i];
    	min2= x[i];
    	for(int j=i;j<x.length;j++)
    	{
    		
    		if(j+1<x.length)
    		{
    			if(x[j+1]<=min)
    			{
    				min = x[j+1];
    				count++;
    			}
    			else break;
    		}
    	}
    	for(int k=i;k!=0;k--)
    	{
    		if(x[k-1]<=min2)
    		{
    			count++;
    			min2 = x[k-1];
    		}
    		else break;
    	}
    	if(count>max)
    		max = count;
    	count = 0;
    }
    System.out.println(max+1);
	}

}
class FastReader{
    BufferedReader br ;
    StringTokenizer st;
  public FastReader(){
        InputStreamReader inr =new InputStreamReader(System.in);
        br=new BufferedReader(inr);
        
    }
    
    String next(){
        while(st==null || !st.hasMoreElements()){
        try{
        st=new StringTokenizer(br.readLine());
        }
        catch(IOException e){
            e.printStackTrace();
        }}
        return st.nextToken();
    }
    
    int nextInt(){
        return Integer.parseInt(next());
    }
    
    double nextDouble(){
        return Double.parseDouble(next());
        
    }
    
    long nextLong(){
        return Long.parseLong(next());
    }
    
    
    String nextLine(){
        String str="";
        try{
            str=br.readLine();
        }
        catch(IOException e)
        {
            e.printStackTrace();
        }
        return str;
    }
}
