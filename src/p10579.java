import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger[] table = new BigInteger[5001];
    int n;
    
    table[1] = BigInteger.ONE;
    table[2] = BigInteger.ONE;
    for(int i = 3; i < 5001; i++)
      table[i] = table[i-1].add(table[i-2]);
    
    while(sc.hasNext())
    {
      n = sc.nextInt();
      System.out.println(table[n]);
    }
  }
}