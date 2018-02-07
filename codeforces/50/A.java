import java.util.Scanner;

public class nextround {

	public static void main(String[] args) {
Scanner input = new Scanner(System.in);
int n= input.nextInt(); 
int m= input.nextInt();
int a= 2 ; 
int b= 1 ; 
int u= 0; 
int r =0 ;
int p =0 ;
int q =0; 
for ( int i =0 ;i<=20;i++){
	if (a<=n){
	u= m/b;
	p= p+u ;
	r=n-a;
	n=r;}else {
		u=m/a;
		p= p+u ;
		r=n-b;
	}
	if (r==0)
		break;
	
	
	}
System.out.println(p);
}}