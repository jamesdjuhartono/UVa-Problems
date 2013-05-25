import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger sum = BigInteger.ZERO;
    BigInteger input;
    
    input = sc.nextBigInteger();
    while(input.compareTo(BigInteger.ZERO) != 0)
    {
      sum = sum.add(input);
      input = sc.nextBigInteger();
    }
      System.out.println(sum);
  }
}