import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger[] cat = new BigInteger[1001];
    int input, temp;

    cat[0] = BigInteger.ONE;
    cat[1] = BigInteger.ONE;
    for(int i = 2; i < 1001; i++)
    {
      temp = (2*i)*(2*i - 1);
      cat[i] = cat[i-1].multiply(BigInteger.valueOf(temp));
      temp = (i+1)*i;
      cat[i] = cat[i].divide(BigInteger.valueOf(temp));
    }
    
    while(sc.hasNext())
    {
      input = sc.nextInt();
      if(input == 0)
        break;
      System.out.println(cat[input]);
    }
  }
}