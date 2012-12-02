import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger[] table = new BigInteger[1001];
    int n;
    
    table[0] = BigInteger.ONE;
    table[1] = new BigInteger("2");
    for(int i = 2; i < 1001; i++)
      table[i] = table[i-1].add(table[i-2]);
    
    while(sc.hasNext())
    {
      n = sc.nextInt();
      System.out.println(table[n]);
    }
  }
}