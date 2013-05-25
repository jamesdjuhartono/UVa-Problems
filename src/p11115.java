import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger n;
    int d;
    
    while(sc.hasNext())
    {
      n = sc.nextBigInteger();
      d = sc.nextInt();
      
      if(n.equals(BigInteger.ZERO) && d == 0)
        break;
      
      System.out.println(n.pow(d));
    }
  }
}