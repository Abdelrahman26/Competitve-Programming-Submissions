import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;
public class function {
	public static void main(String[] args)throws IOException {
		FastReader input =new FastReader();
		int n =input.nextInt();
		int l =input.nextInt();
		Long [] x = new Long [n];
		for(int i =0;i<n;i++)x[i]=input.nextLong();
		Arrays.sort(x);
		double  max = 0; 
		for(int i =0;i<n-1;i++)
		{
			if(x[i+1]-x[i]>max)max = x[i+1]-x[i];
		}
		max /= 2 ;
		if (x[0]!=0)max =Math.max(max,x[0]);
		if (x[x.length-1]!=l)max =Math.max(max,l-x[x.length-1]);
		System.out.println(max);
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