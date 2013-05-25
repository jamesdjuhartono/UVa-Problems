import java.util.Scanner;
import java.math.BigDecimal;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigDecimal r;
    int n;
    String str;
    
    while(sc.hasNext())
    {
      r = sc.nextBigDecimal();
      n = sc.nextInt();
      r = r.pow(n);
      r = r.stripTrailingZeros();
      str = r.toPlainString();
      if(str.charAt(0) == '0')
        str = str.substring(1);
      
      System.out.println(str);
    }
  }
}