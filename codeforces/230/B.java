import java.util.Scanner;
import java.io.PrintWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException ;
import java.util.StringTokenizer;
public class Main {
	public static void main(String[] args) throws IOException{
		FastReader input =new FastReader();    int n =input.nextInt();
    for(int i=0;i<n;i++)
    {
    	double s = input.nextDouble();
    	double ss= Math.sqrt(s);
    	int dd =(int)ss;
    	if (ss != (int)ss)
    	{
    	  System.out.println("NO");
    	}
    	
    	else if (dd%2==0&&dd!=2)
    	{
    		System.out.println("NO");
    	}
        else if (dd==4)System.out.println("YES");
    	else 
    	{
    	
    	if(isprime(dd)==true)System.out.println("YES");
    	else System.out.println("NO");
    	}
    } 
	 }
	 static boolean isprime(int x)
	 {
		 if(x==2)return true;
		 if(x<2||x%2==0) return false;
		 for(int i=3;i*i<=x;i+=2)
		 {
			 if(x%i==0)return false;
		 }
		 return true;
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

