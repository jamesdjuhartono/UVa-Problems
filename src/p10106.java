import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger res;
    BigInteger n, m;
    
    while(sc.hasNext())
    {
      n = sc.nextBigInteger();
      m = sc.nextBigInteger();
      
      res = n.multiply(m); 
      
      System.out.println(res);
    }
  }
}