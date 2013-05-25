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
      String str = sc.nextLine();
      String text[] = str.split(" ");
      op1 = new BigInteger(text[0]);
      operator = text[1];
      op2 = new BigInteger(text[2]);
      
      if(operator.equals("+"))
        res = op1.add(op2);
      else
        res = op1.multiply(op2);
      
      System.out.println(str);
      
      if(op1.compareTo(new BigInteger("2147483647")) == 1)
        System.out.println("first number too big");
      if(op2.compareTo(new BigInteger("2147483647")) == 1)
        System.out.println("second number too big");
      if(res.compareTo(new BigInteger("2147483647")) == 1)
        System.out.println("result too big");
    }
  }
}