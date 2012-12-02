import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger input, ans;
    int numCase;
    
    numCase = sc.nextInt();
    for(int i = 0; i < numCase; i++)
    {
      ans = BigInteger.ZERO;
      input = sc.nextBigInteger();
      ans = ans.add(input.pow(4));
      ans = ans.subtract(input.pow(3).multiply(BigInteger.valueOf(6)));
      ans = ans.add(input.pow(2).multiply(BigInteger.valueOf(23)));
      ans = ans.subtract(input.multiply(BigInteger.valueOf(18)));
      ans = ans.add(BigInteger.valueOf(24));
      ans = ans.divide(BigInteger.valueOf(24));
      
      System.out.println(ans);
    }
    
  }
}