import java.util.Arrays;
import java.util.Scanner;
import java.math.*;

public class codeforces2 {
	public static void main(String[] args) {
		Scanner input =new Scanner(System.in);
		int n =input.nextInt();
		int k =input.nextInt();
		char [] z =new char [k];
		char [] zz=new char [n];
		char y    = 97;
		char yy   =0;
		for(int i =0,j=0;i<k;i++, y++){
			 yy =y;
		     z[i]=yy; 
	}
		for(int i=0,j=0;i<n;i++,j++){
			zz[i]=z[j];
			if(j==k-1)j=-1;
		}
         for(int i=0;i<n;i++){
        	 System.out.print(zz[i]);
         }
	}}