import java.io.PrintWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException ;
import java.util.StringTokenizer;
public class Main {
	public static void main(String[] args) throws IOException{
		FastReader input =new FastReader();
		int n =input.nextInt();
		int [] x = new int [n+1];
		for(int i=1;i<=n;i++)
		{
			x[i] = input.nextInt();
		}
		int [] vasya = new int [n+1];
		int [] pytea = new int [n+1];
		for(int i=1;i<=n;i++)
		{
			vasya[x[i]]=i;
			pytea[x[i]]=n-i+1;
		}
		long count =0,count2 = 0;
		int m =input.nextInt();
		for(int i=0;i<m;i++)
		{
			int r = input.nextInt();
			count += vasya[r];
			count2+= pytea[r];
		}
		System.out.println(count);System.out.println(count2);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
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
