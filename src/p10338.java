import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger[] fact = new BigInteger[21];
    BigInteger res = BigInteger.ZERO;
    String input, num;
    int[] chars = new int[26];
    int numCase;
    
    fact[0] = new BigInteger("1");
    fact[1] = new BigInteger("1");
    fact[2] = new BigInteger("2");
    
    for(int i = 3; i <= 20; i++)
    {
      num = Integer.toString(i);
      fact[i] = (fact[i-1]).multiply(new BigInteger(num));
    }
    
    numCase = sc.nextInt();
    
    for(int i = 0; i < numCase; i++)
    {
      input = sc.next();
      for(int j = 0; j < 26; j++)
        chars[j] = 0;
      for(int j = 0; j < input.length(); j++)
        chars[(int)input.charAt(j)-65]++;
      
      res = fact[input.length()];
      for(int j = 0; j < 26; j++)
      {
        if(chars[j] != 0 && chars[j] != 1)
          res = res.divide(fact[chars[j]]);
      }
      
      System.out.println("Data set " + (i+1) + ": " + res);
    }
  }
}