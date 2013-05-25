import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger inp1, inp2;
    int numCase, length;
    String str1, str2;
    
    numCase = sc.nextInt();
    
    for(int i = 0; i < numCase; i++)
    {
      length = sc.nextInt();
      str1 = "";
      str2 = "";
      for(int j = 0; j < length; j++)
      {
        str1 += sc.next();
        str2 += sc.next();
      }
      
      inp1 = new BigInteger(str1);
      inp2 = new BigInteger(str2);
      
      System.out.println(inp1.add(inp2));
      if(i != numCase-1)
        System.out.println();
    }
  }
}