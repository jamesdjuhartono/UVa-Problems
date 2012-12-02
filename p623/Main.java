import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger[] fact = new BigInteger[1001];
    String num;
    int input;
    
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
      input = sc.nextInt();
      
      System.out.println(input+"!");
      System.out.println(fact[input]);
    }
  }
}