import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger[] fact = new BigInteger[1001];
    BigInteger ten = new BigInteger("10");
    BigInteger fact_res;
    String num;
    int input, res;
    
    fact[0] = new BigInteger("1");
    fact[1] = new BigInteger("1");
    fact[2] = new BigInteger("2");
    
    for(int i = 3; i <= 1000; i++)
    {
      num = Integer.toString(i);
      fact[i] = (fact[i-1]).multiply(new BigInteger(num));
    }
    
    while(sc.hasNext())
    {
      res = 0;
      input = sc.nextInt();
      fact_res = fact[input];
      
      while(!fact_res.equals(BigInteger.ZERO))
      {
        res += fact_res.mod(ten).intValue();
        fact_res = fact_res.divide(ten);
      }
      
      System.out.println(res);
    }
  }
}