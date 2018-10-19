import java.io.PrintWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException ;
import java.util.StringTokenizer;
public class Main {
	public static void main(String[] args)throws IOException {
		FastReader input =new FastReader();
	    int x = input.nextInt();
	   int count = 0;
	    int cnt   = 0;
	    for(int i =19;i<100000000;i++)
	    {
	    	 String c = Integer.toString(i);
	    	 StringBuilder u = new StringBuilder(c);
	    	 for(int j =0;j<c.length();j++)
	    	 {
	    		cnt =cnt+( u.charAt(j) - 48);
	    		if(cnt>10)
	    			break;
	    	 }
	    	 if(cnt==10)
	    	count ++;
	    	 if(count == x )
	    	 {
	    		 System.out.println(i);
	    		 return;
	    	 }
	    	
	    	 cnt =0;
	    }
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