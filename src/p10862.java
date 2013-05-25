import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger[] table = new BigInteger[4002];
    BigInteger two = new BigInteger("2");
    int n;
    
    table[1] = BigInteger.ONE;
    table[2] = BigInteger.ONE;
    for(int i = 3; i < 4002; i++)
      table[i] = table[i-1].add(table[i-2]);
    
    while(sc.hasNext())
    {
      n = sc.nextInt();
      if(n == 0)
        break;
      System.out.println(table[n*2]);
    }
  }
}