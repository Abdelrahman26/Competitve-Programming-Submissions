import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;
public class Main {
	public static void main(String[] args)throws IOException {
		FastReader input =new FastReader();
		int n =input.nextInt();
		int ss =input.nextInt();
		long [] x = new long [n];
		for(int i=0;i<n;i++)x[i] = input.nextLong();
		
		long key=0,value=0,s=1,e=x.length;
		while (true)
		{
		int k = bs (s,e,x);
		if(k==-1)
		{
			System.out.println(key);
			System.out.println(value);
			return;
		}
		else 
		{
			long[] cost = new long [x.length+1];
			long kk = (long)k;
			for(int i=1;i<=x.length;i++)cost[i]=x[i-1]+(kk*i);
			Arrays.sort(cost);
		    for(int i=1;i<=x.length;i++)	cost[i]+=cost[i-1];
			
		    if(cost[k]>ss)
		    {
		    e = k- 1;
		    }
		    else if (cost[k]<ss)
		    {
		    	s = k+1;
		    	key = k;
		    	value = cost[k];
		    }
		    else 
		    {
		    	key = k;
		    	value = cost[k];
		    	System.out.println(key);
		    	System.out.println(value);
		    	return;
		    }	
		}
		}
	}
public static int bs (long s,long e,long[]x)
{
	if(s>e)return -1;
	long mid = (s+e)/2;
	int w = (int)mid;
	return w ; 
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
