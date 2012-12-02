import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger[] fact = new BigInteger[101];
    BigInteger res;
    int n, m;
    String num;
    
    fact[0] = new BigInteger("1");
    fact[1] = new BigInteger("1");
    fact[2] = new BigInteger("2");
    
    for(int i = 3; i <= 100; i++)
    {
      num = Integer.toString(i);
      fact[i] = (fact[i-1]).multiply(new BigInteger(num));
    } 
    while(sc.hasNext())
    {
      n = sc.nextInt();
      m = sc.nextInt();
      if(m == 0 && n == 0)
        break;
      
      res = fact[n].divide(fact[n-m].multiply(fact[m])); 
      
      System.out.println(n + " things taken " + m + " at a time is " + res +  " exactly.");
    }
  }
}