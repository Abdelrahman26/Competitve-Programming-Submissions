import java.util.Scanner;

public class proplemmmm {

	public static void main(String[] args) {
		
		// TODO Auto-generated method stub
Scanner input =new Scanner(System.in);
int salah = 0;
int modry = 0;
int n =input.nextInt();
int [] x =new int [n];
for (int i=0;i<n;i++){
	x[i]=input.nextInt();
}
int i= 0;
int j =x.length-1;
while (true){
	if (x[i]>x[j]){
		salah +=x[i];
		i++;
	} else if (i==j){salah +=x[i];
		break;
	}
	else {salah +=x[j];
	
	j--;
}   
	if (x[i]>x[j]){
		modry +=x[i];
		i++;
	}
 else if (i==j){modry +=x[i];
break;
}
	else {
		modry +=x[j];
		j--;
	}
	
	}
System.out.println(salah);
System.out.println(modry);


}}