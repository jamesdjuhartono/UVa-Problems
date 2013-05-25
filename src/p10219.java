import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger res;
    String num;
    int n, k;
    
    while(sc.hasNext())
    {
      n = sc.nextInt();
      k = sc.nextInt();
      
      res = BigInteger.ONE;
      
      if(k > (n / 2))
        k = n - k;
      
      for(int i = 0; i < k; i++)
      {
        res = res.multiply(BigInteger.valueOf((n - i)));
        res = res.divide(BigInteger.valueOf((1 + i)));
      }
      
      num = res.toString();
      System.out.println(num.length());
    }
  }
}