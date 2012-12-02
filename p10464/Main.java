import java.util.Scanner;
import java.math.BigDecimal;
import java.text.DecimalFormat;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigDecimal a, b, res;
    String s1, s2;
    int numCase;
    boolean judge;
    
    numCase = sc.nextInt();
    for(int i = 0; i < numCase; i++)
    {
      judge = false;
      s1 = sc.next();
      s2 = sc.next();
      a = new BigDecimal(s1);
      b = new BigDecimal(s2);
      res = a.add(b).stripTrailingZeros();
      
      int length = s1.length()>s2.length()?s1.length():s2.length();
      String point = "#.";
      for(int j = 0; j < length; j++)
        point += "#";
      DecimalFormat f = new DecimalFormat(point);
      String Ans = f.format(res);
      char[] str = Ans.toCharArray();
      for(int j = 0; j < str.length; j++)
        if(str[j] == '.')     judge = true;
      if(!judge)
        System.out.println(Ans + ".0");
      else
        System.out.println(Ans);
    }
  }
}