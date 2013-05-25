import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger[] cat = new BigInteger[20];
    BigInteger input;
    int temp;
    
    cat[0] = BigInteger.ONE;
    cat[1] = BigInteger.ONE;
    for(int i = 2; i < 20; i++)
    {
      temp = (2*i)*(2*i - 1);
      cat[i] = cat[i-1].multiply(BigInteger.valueOf(temp));
      temp = (i+1)*i;
      cat[i] = cat[i].divide(BigInteger.valueOf(temp));
    }
    System.out.println(cat[14]);
    while(sc.hasNext())
    {
      input = sc.nextBigInteger();
      for(int i = 0; i < 20; i++)
      {
        if(cat[i].equals(input)){
          System.out.println(i);
          break;
        }
      }
    }
  }
}