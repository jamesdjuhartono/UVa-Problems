import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger[] fact = new BigInteger[367];
    int[] digits = new int[10];
    int inp;
    String res;
    
    fact[1] = BigInteger.valueOf(1);
    fact[2] = BigInteger.valueOf(2);
    for(int i = 3; i < 367; i++)
      fact[i] = fact[i-1].multiply(BigInteger.valueOf(i));
    
    inp = sc.nextInt();
    while(inp != 0)
    {
      res = fact[inp].toString();
      for(int i = 0; i < 10; i++)
        digits[i] = 0;
      for(int i = 0; i < res.length(); i++)
      {
        if(res.charAt(i) == '0')digits[0]++;
        else if(res.charAt(i) == '1')digits[1]++;
        else if(res.charAt(i) == '2')digits[2]++;
        else if(res.charAt(i) == '3')digits[3]++;
        else if(res.charAt(i) == '4')digits[4]++;
        else if(res.charAt(i) == '5')digits[5]++;
        else if(res.charAt(i) == '6')digits[6]++;
        else if(res.charAt(i) == '7')digits[7]++;
        else if(res.charAt(i) == '8')digits[8]++;
        else if(res.charAt(i) == '9')digits[9]++;
      }
      
      System.out.println(inp + "! --");
      System.out.printf("   (0)%5d    (1)%5d    (2)%5d    (3)%5d    (4)%5d\n",digits[0],digits[1],digits[2],digits[3],digits[4]);
      System.out.printf("   (5)%5d    (6)%5d    (7)%5d    (8)%5d    (9)%5d\n",digits[5],digits[6],digits[7],digits[8],digits[9]);
      
      inp = sc.nextInt();
    }
  }
}