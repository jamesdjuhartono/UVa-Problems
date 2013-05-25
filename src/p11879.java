import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger input, seventeen;
    
    seventeen = new BigInteger("17");
    input = sc.nextBigInteger();
    
    while(!input.equals(BigInteger.ZERO))
    {
      if(input.gcd(seventeen).equals(seventeen))
        System.out.println("1");
      else
        System.out.println("0");

      input = sc.nextBigInteger();
    }
  }
}