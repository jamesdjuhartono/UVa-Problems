import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger res;
    BigInteger n, a;
    
    while(sc.hasNext())
    {
      n = sc.nextBigInteger();
      a = sc.nextBigInteger();
      res = BigInteger.ZERO;
      
      for(int i = 1; i <= n.intValue(); i++)
        res = res.add(new BigInteger(Integer.toString(i)).multiply(a.pow(i)));
          
      System.out.println(res);
    }
  }
}