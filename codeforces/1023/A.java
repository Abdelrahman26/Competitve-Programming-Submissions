import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;
public class dd {
	public static void main(String[] args)throws IOException  {
		FastReader input =new FastReader();
		int n = input.nextInt();
		int m =input.nextInt();
		String s = input.nextLine();
		String t = input.nextLine();
		int index = s.indexOf('*');
		if(m+1<n)
		{
			System.out.println("NO");
			System.exit(0);
		}
		else if (index==-1)
		{
			if(s.equals(t))
			{
			System.out.println("YES");
			}
			else System.out.println("NO");
			System.exit(0);
		}
		else if (index==0)
		{
			int l = n-1;
			m = m - l ;
			if(s.substring(1).equals(t.substring(m)))
				System.out.println("YES");
			else 
				System.out.println("NO");
			System.exit(0);
		}
		else if (index == s.length()-1)
		{
			if(s.substring(0,index).equals(t.substring(0,index)))
				System.out.println("YES");
			else 
				System.out.println("NO");
			System.exit(0);
		}
		else 
		{
			int k = (n-index-1);
			if(s.substring(0,index).equals(t.substring(0,index))&&s.substring(index+1).equals(t.substring(m-k)))
			System.out.println("YES");
			else 
				System.out.println("NO");
			System.exit(0);
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