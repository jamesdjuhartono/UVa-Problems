import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger input;
    
    while(sc.hasNext())
    {
      input = sc.nextBigInteger();
      if(input.equals(BigInteger.ZERO))
        break;
      if(input.mod(BigInteger.valueOf(11)).equals(BigInteger.ZERO))
        System.out.println(input + " is a multiple of 11.");
      else
        System.out.println(input + " is not a multiple of 11.");
    }
  }
}