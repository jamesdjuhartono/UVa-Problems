import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger[] table = new BigInteger[52];
    int n, numCase;
    
    table[1] = new BigInteger("2");
    table[2] = new BigInteger("3");
    for(int i = 3; i < 52; i++)
      table[i] = table[i-1].add(table[i-2]);
    
    numCase = sc.nextInt();
    for(int i = 1; i <= numCase; i++)
    {
      n = sc.nextInt();
      System.out.println("Scenario #" + i + ":");
      System.out.println(table[n]);
      System.out.println();
    }
  }
}