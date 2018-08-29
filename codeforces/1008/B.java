import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;


public class FUNCTION {
	public static void main(String[] args) throws IOException{
		FastReader input =new FastReader();
        int n =input.nextInt();
        int max = Integer.MAX_VALUE;
        for(int i=0;i<n;i++)
        {
        	int x=input.nextInt();
        	int y=input.nextInt();
        	if (Math.max(x, y)<=max)max =  Math.max(x, y);
        	else if(Math.min(x,y)<=max)  max = (Math.min(x,y));
        	else
        		{
        		System.out.println("NO");System.exit(0);
        		}
        }
        System.out.println("YES");
        
        
       
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