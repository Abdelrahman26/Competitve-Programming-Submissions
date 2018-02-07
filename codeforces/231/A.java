import java.util.Scanner;

public class nextround {

	public static void main(String[] args) {
Scanner input = new Scanner(System.in);
int n = input.nextInt();
int count = 0 ;
int questions = 0 ;
for (int i= 0 ; i<n;i++){
	for (int j =0 ;j<3;j++){
	int x = input.nextInt();
	if (x==1){
		count++ ;}
	}
	if (count>=2){
		questions++;
		
	}
	count = 0; 
	
}
System.out.println(questions);
}}