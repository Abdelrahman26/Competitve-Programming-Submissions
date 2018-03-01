import java.util.Scanner;


public class startup {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
	Scanner input = new Scanner(System.in);
	int count = 0;
	int n =input.nextInt();
    int [] home =new int [n];
    int [] guest=new int [n];
    for (int i =0;i<n;i++){
    	home[i] =input.nextInt();
    	guest[i]=input.nextInt();
    }
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		if(home[i]==guest[j])count++;
    	}
    }
    System.out.println(count);
	}

}