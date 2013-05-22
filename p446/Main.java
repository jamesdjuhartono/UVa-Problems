import java.util.*;
import java.math.*;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int tc;
		tc = sc.nextInt();
		while(tc-- > 0){
			String a, b, op;
			a = sc.next();
			op = sc.next();
			b = sc.next();

			BigInteger num1 = new BigInteger(a, 16);
			BigInteger num2 = new BigInteger(b, 16);
			BigInteger ans;

			if(op.equals("-")){
				ans = num1.subtract(num2);
			} else{
				ans = num1.add(num2);
			}

			String zeros1 = "", zeros2 = "";
			for(int i = 0; i < 13-num1.toString(2).length(); i++) zeros1 += "0";
			for(int i = 0; i < 13-num2.toString(2).length(); i++) zeros2 += "0";

			System.out.println(zeros1 + num1.toString(2) + " " + op + " " + zeros2 + num2.toString(2) + " = " + ans.toString(10));
		}
	}
}