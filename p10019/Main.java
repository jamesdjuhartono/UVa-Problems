import java.util.*;
import java.math.*;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int tc;
		tc = sc.nextInt();
		while(tc-- > 0){
			String num;
			num = sc.next();
			BigInteger x1 = new BigInteger(num, 10);
			BigInteger x2 = new BigInteger(num, 16);
			String b1 = x1.toString(2);
			String b2 = x2.toString(2);

			int b1count = 0, b2count = 0;
			for(int i = 0; i < b1.length(); i++){
				if(b1.charAt(i) == '1') b1count++;
			}

			for(int i = 0; i < b2.length(); i++){
				if(b2.charAt(i) == '1') b2count++;
			}
			System.out.println(b1count + " " + b2count);
		}
	}
}