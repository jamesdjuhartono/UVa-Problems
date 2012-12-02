import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger res = BigInteger.ZERO;
    BigInteger op1, op2;
    String operator;
    
    while(sc.hasNext())
    {
      op1 = sc.nextBigInteger();
      operator = sc.next();
      op2 = sc.nextBigInteger();
      
      if(operator.equals("/"))
        res = op1.divide(op2);
      else
        res = op1.remainder(op2);
      
      System.out.println(res);
    }
  }
}