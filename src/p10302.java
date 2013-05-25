import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger[] table = new BigInteger[50001];
    int n;
    
    table[1] = BigInteger.ONE;
    for(int i = 2; i < 50001; i++)
      table[i] = table[i-1].add(BigInteger.valueOf(i).pow(3));
    
    while(sc.hasNext())
    {
      n = sc.nextInt();
      System.out.println(table[n]);
    }
  }
}