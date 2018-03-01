import java.util.Scanner;


public class startup {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
	Scanner input = new Scanner(System.in);
	int price = input.nextInt();
	int r     = input.nextInt();
	int m     = 0;
	for(int i =1 ;i<10;i++){
		m=price*i;
		if((m-r)%10==0||m%10==0){
			System.out.println(i);
			break;
			}
	}
	}

}