import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger p, q, _gcd;
    String dummy;
    int numCase;
    
    numCase = sc.nextInt();
    
    for(int i = 0; i < numCase; i++)
    {
      p = sc.nextBigInteger();
      dummy = sc.next();
      q = sc.nextBigInteger();
      
      _gcd = p.gcd(q);
      
      System.out.println(p.divide(_gcd) + " / " + q.divide(_gcd));
    }
  }
}