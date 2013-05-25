import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger x, y, z;
    int numCase;
    
    numCase = sc.nextInt();
    for(int i = 0; i < numCase; i++)
    {
      x = sc.nextBigInteger();
      y = sc.nextBigInteger();
      z = sc.nextBigInteger();
      System.out.println(x.modPow(y,z));
    }
    sc.nextInt();
  }
}