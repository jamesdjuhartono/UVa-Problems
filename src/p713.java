import java.util.*;
import java.math.*;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int tc;
		tc = sc.nextInt();
		while(tc-- > 0){
			String a, b, reva, revb;
			a = sc.next();
			b = sc.next();

			reva = revb = "";
			for(int i = a.length()-1; i >= 0; i--){
				reva += a.charAt(i);
			}
			for(int i = b.length()-1; i >= 0; i--){
				revb += b.charAt(i);
			}

			BigInteger num1 = new BigInteger(reva);
			BigInteger num2 = new BigInteger(revb);
			BigInteger res = num1.add(num2);
			String tmp = res.toString();
			String ans = "";
			for(int i = tmp.length()-1; i >= 0; i--){
				ans += tmp.charAt(i);
			}
			System.out.println(new BigInteger(ans));
		}
	}
}