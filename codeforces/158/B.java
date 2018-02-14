import java.util.Scanner;

public class problemm {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
Scanner input =new Scanner(System.in);
int n =input.nextInt();

int count = 0;
int ones  =0;
int twos  =0;
int threes=0;
int fours =0;
int count1=0;
int count4=0;
for (int i= 0;i<n;i++){
	int x =input.nextInt();
	if (x==1){ones ++;}
	else if (x==2){twos++;}
	else if (x==3){threes++;}
	else fours++;
}while (threes> 0){
if (ones>=1){
	threes--;
	ones--;
	count++;}
else { count ++;
threes--;
}
}
while (twos>0){
if (twos>1){
	twos -=2;
	count++;
}
else if (ones>=2){
	ones -=2;
	twos--;
	count++;
}
else if (ones==1){
	ones--;
	twos--;
	count++;}
	else{
		twos--;
		count++;
	}
	}

	count1=ones/4;
	if (ones%4>0){
		count1++;
	}

count4=fours*1;
	System.out.println(count+count1+count4);
	


}}