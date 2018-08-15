import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
public class SS {
	public static void main(String[] args)throws IOException {
		FastReader input =new FastReader();
		int sum = 0;
		int count =0 ;
		String x =input.nextLine();
		for(int i=0;i!=-1;i++)
		{
			if(x.length()==1)break;
			for (int j=0;j<x.length();j++)
			{
			String c = x.substring(j,j+1);
			int r = Integer.parseInt(c);
			 sum = sum + r;
			}
			x = Integer.toString(sum);
			count++;
			sum = 0;
		}
		System.out.println(count);
		
		
		
		
		
		
		
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