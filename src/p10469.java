import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger inp1, inp2;
    
    while(sc.hasNext())
    {
      inp1 = sc.nextBigInteger();
      inp2 = sc.nextBigInteger();

      System.out.println(inp1.xor(inp2));
    }
  }
}