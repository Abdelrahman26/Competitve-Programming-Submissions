import java.util.Scanner;


public class codeforces2 {
	public static void main(String[] args) {
		Scanner input =new Scanner(System.in);

		int n =input.nextInt();
		int b =input.nextInt();
		int d =input.nextInt();
		int count = 0;
		int ww =0;
		int []x =new int [n];
		int []y =new int [n];
     for (int i=0;i<n;i++){
    	 x[i] =input.nextInt();
     }
     for (int j=0;j<n;j++)
     {
    	 if (x[j]<=b){}
    	 else x[j]=0;
    	 }
     for (int i=0;i<n;i++){
      
    	   ww = ww+x[i];
    	   if (ww <= d){
    		   
    	   }
    	   else {
    		   ww=0;
    		   count++;
    	   }
       
     }
     System.out.println(count);
		}

	}