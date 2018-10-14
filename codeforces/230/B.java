import java.util.Scanner;
import java.io.PrintWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException ;
import java.util.StringTokenizer;
public class Main {
	public static void main(String[] args) throws IOException{
		FastReader input =new FastReader();    
		int n =input.nextInt();
			 //the default value for boolean is false;
			 boolean [] z =new boolean [1000001];
			 for(int i=2;i<1000001;i++) 
		            z[i] = true;
			 for(int i=2;i*i<=1000000;i++)
			 {
				 if(z[i]==true)
				 {
					 for(int j =i*2;j<=1000000;j +=i)
					 {
						 z[j]=false;
					 }
				 }
			 }
			for(int i=0;i<n;i++)
			{
				double t = input.nextDouble();
				t = Math.sqrt(t);
				if(t==(int)t)
				{
					int y =(int)t;
					if (z[y]==true)System.out.println("YES");
					else System.out.println("NO");
				}
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

