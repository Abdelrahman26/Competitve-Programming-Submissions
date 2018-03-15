
import java.util.Scanner;
public class codeforces {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
   int y =input.nextInt();
   int w =input.nextInt();
   int z =0;
   int a =0;
   int b =0;
   if(y>w){
	   z=y;
   }else z=w;
   z=6-z+1;
   if(z==2||z==1||z==6||z==3)
   {
	   a=1;
	   b=6/z;
   }
   else if (z==5){
	   a=5;
	   b=6;
   }
   else {a=2;
   b=3;
   }
   System.out.println(a+"/"+b);
}}
