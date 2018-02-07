import java.util.Scanner;

public class nextround {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
        Scanner input =new Scanner(System.in);
        
        int n = input.nextInt();
        int [] p = new int [n];
        int k = input.nextInt();
        int  count = 0  ;
        for(int i =0 ; i<n;i++){
        	p[i] = input.nextInt();
        }
        for (int i = 0 ; i<n;i++){
        	if (p[i]==0){}
        	else{
        		if ( p[i] >= p[k-1] )
        		count++;
        	
        }}
System.out.println(count);
}}