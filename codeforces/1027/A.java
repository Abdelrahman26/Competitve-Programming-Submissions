import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;
public class aa {
	public static void main(String[] args)throws IOException {
		FastReader input =new FastReader();
	    int n =input.nextInt();
	    for(int i= 0;i<n;i++)
	    {
	    	int m =input.nextInt(); int g = 5 ;
	    	String x = input.nextLine();
	    	String a = x.substring(0,m/2);
	    	String b = x.substring(m/2);
	    	char [] xx = a.toCharArray();
	    	char [] yy = b.toCharArray();
	    	for(int j = 0 , k =a.length()-1;k!=-1;j++,k--)
	    	{
	    	if(xx[j]==yy[k]||Math.abs(xx[j]-yy[k])==2)
	    	{
	    	}
	    	
	    	else 
	    	{
	              g= 0;
	    	}
	    }if(g==5)System.out.println("YES");
	    else System.out.println("NO");
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
