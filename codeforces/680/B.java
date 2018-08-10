import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException ;
import java.util.StringTokenizer;
public class ff {
	public static void main(String[] args)throws IOException {
		FastReader input =new FastReader();
		int n = input.nextInt();
		int a = input.nextInt(); 
		int n1 = 0,n2=0,count=0;
		int [] x = new int [n+1];
		for(int i=1;i<n+1;i++)x[i]=input.nextInt();
		int k = Math.max(n-a,a);
		int n3=0;int n4=0;
		for(int i=1;i<=k;i++)
		{
			if(a+i<n+1)
			{
				if(x[a+i]==1)n1=1;else n1=0;
			}
			else n3=1;
			if(a-i>0)
			{
				if(x[a-i]==1)n2=1;else n2=0;
			}
			else n4=1;
			if(n1==n2&&n1==1)count +=2;
			else 
			{
			if(n1==1&&n4==1)count++;
			if(n2==1&&n3==1)count++;
			}
			n1=0;n2=0;n3=0;n4=0;
		}
		if(x[a]==1)count++;
		System.out.println(count);
	}

}
//
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