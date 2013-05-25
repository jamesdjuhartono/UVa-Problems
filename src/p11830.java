import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger n;
    int d;
    String in, out;
    
    while(sc.hasNext())
    {
      d = sc.nextInt();
      n = sc.nextBigInteger();
      
      if(n.equals(BigInteger.ZERO) && d == 0)
        break;
      
      in = n.toString();
      out = "";
      for(int i = 0; i < in.length(); i++)
      {
        if((int)in.charAt(i) != (d+48))
          out += in.charAt(i);
      }
      if(out == "")
        out = "0";
      n = new BigInteger(out);
      System.out.println(n);
    }
  }
}