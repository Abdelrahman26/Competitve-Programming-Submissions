import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Set;
import java.util.StringTokenizer;
import java.util.TreeSet;


public class Main {
	public static void main(String[] args)throws IOException {
		// TODO Auto-generated method stub
		FastReader input =new FastReader(); 
		long n =input.nextLong();
		int k =input.nextInt();
		Set<Long>value = new TreeSet<Long>();
		for(long i=1;i*i<=n;i++)
		{
			if(n%i==0)
			{
			    value.add(i);
				value.add(n/i);
			}
		}
		Object [] s = value.toArray();
		if(k>s.length)System.out.println(-1);
		else System.out.println(s[k-1]);
		System.exit(0);
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

