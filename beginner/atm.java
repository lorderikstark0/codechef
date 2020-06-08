import java.io.*;
import java.util.*;


public class Main{ //use atm for compiling locally 
	public static void main(String[] args) {
		 Scanner sc = new Scanner(System.in)	;
		
		int withdrawl =sc.nextInt();;
		float balance =sc.nextFloat();

		if(withdrawl%5==0 && balance >(withdrawl+0.5)){
			System.out.printf("%.2f",balance -(withdrawl+0.5));
		}
		
		else{
			System.out.printf("%.2f",balance);
		}
	}
}