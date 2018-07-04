import java.util.Scanner;
public class pangram {
	public static void main(String[] args) {
Scanner input =new Scanner(System.in);
int n= input.nextInt();
input.nextLine();
String q = input.nextLine();
String s =q.toLowerCase();
int  [] frequency = new int[26];
int count =0;
for(int i=0;i<n;i++)
     {
	int w =s.charAt(i);
	     frequency[w-97]++;
	 }
for(int i=0;i<26;i++)
{
	if(frequency[i]>0)count++;
}
if(count==26)System.out.println("YES");
else 
System.out.println("NO");


	}

}
