import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger res;
    int n, m;
   
    while(sc.hasNext())
    {
      n = sc.nextInt();
      m = sc.nextInt();
      if(m == 0 && n == 0)
        break;
      
      res = BigInteger.ONE;
      if(m > n/2)
        m = n/2;
      for (int i = 0; i < m; i++) 
      {
            res = res.multiply(BigInteger.valueOf(n - i));
            res = res.divide(BigInteger.valueOf(1 + i));
      }
      System.out.println(res);
    }
  }
}