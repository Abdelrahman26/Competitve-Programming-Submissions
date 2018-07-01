import java.util.Scanner;
import java.util. ArrayList;

public class key {
	public static void main(String[] args) {
    Scanner input =new Scanner(System.in);
    ArrayList<Character>l=new ArrayList<Character>();
    l.add('q');l.add('w');l.add('e');l.add('r');l.add('t');l.add('y');l.add('u');l.add('i');l.add('o');l.add('p');
    l.add('a');l.add('s');l.add('d');l.add('f');l.add('g');l.add('h');l.add('j');l.add('k');l.add('l');l.add(';');
    l.add('z');l.add('x'); l.add('c');l.add('v');l.add('b');l.add('n');l.add('m');l.add(',');l.add('.');l.add('/');
    char x = input.nextLine().charAt(0);
    String y =input.nextLine();
    if(x=='R')
    {
    for(int i=0;i<y.length();i++)
    	{
    		int  w = l.indexOf(y.charAt(i));
    		
    		System.out.print(l.get(w-1));
        }
	}
    else 
    {
    	for(int i=0;i<y.length();i++)
    	{
    		int  w = l.indexOf(y.charAt(i));
    		System.out.print(l.get(w+1));
        }
}
}}