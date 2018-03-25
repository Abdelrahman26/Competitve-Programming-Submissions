import java.util.Arrays;
import java.util.Scanner;
import java.math.*;

public class codeforces2 {
	public static void main(String[] args) {
		Scanner input =new Scanner(System.in);
		int n    =input.nextInt();
	    int [] x =new int[n];
	    int [] a =new int[n];
	    int [] b =new int[n];
	    int [] c =new int[n];
	    int A=0;
	    int B=0;
	    int C=0;
	    for (int i=0;i<n;i++){
	    	x[i] =input.nextInt();
	    	if(x[i]==1){a[A]=i+1;
	    	A++;}
	    	else if(x[i]==2){b[B]=i+1;
	    	B++;}
	    	else if(x[i]==3){c[C]=i+1;
	    	C++;}
	    }
	    int w = Math.min(A, B);
	    w=Math.min(w, C);
	    System.out.println(w);
	    for(int i=0;i<w;i++){
	    	System.out.println(a[i]+" "+b[i]+" "+c[i]);
	    }
	    }

	}


