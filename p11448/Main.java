import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger res = BigInteger.ZERO;
    BigInteger op1, op2;
    int numCase;
    
    numCase = sc.nextInt();
    
    for(int i = 0; i < numCase; i++)
    {
      op1 = sc.nextBigInteger();
      op2 = sc.nextBigInteger();
      
      res = op1.subtract(op2);
      
      System.out.println(res);
    }
  }
}