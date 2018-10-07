import java.io.PrintWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException ;
import java.util.StringTokenizer;
public class Main {
	public static void main(String[] args)throws IOException {
		FastReader input =new FastReader();	
		int n =input.nextInt();
		int k = n%7;int q = n/7;
		for(int i=0;i<q;i++)
		{
			System.out.print('R');
			System.out.print('O');
			System.out.print('Y');
			System.out.print('G');
			System.out.print('B');
			System.out.print('I');
			System.out.print('V');
		}
		if(k==1)System.out.print('G');
		else if (k==2)
			{
			System.out.print('G');
			System.out.print('B');
			}
		else if (k==3) {
			System.out.print('O');
			System.out.print('Y');
			System.out.print('G');
		}
		else if (k==4) {
			System.out.print('O');
			System.out.print('Y');
			System.out.print('G');
			System.out.print('B');
		}
		else if (k==5) {
			System.out.print('O');
			System.out.print('Y');
			System.out.print('G');
			System.out.print('B');
			System.out.print('I');

		}
		else if (k==6) {
			System.out.print('O');
			System.out.print('Y');
			System.out.print('G');
			System.out.print('B');
			System.out.print('I');
			System.out.print('V');
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
