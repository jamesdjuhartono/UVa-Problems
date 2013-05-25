import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    //BigInteger[] fact = new BigInteger[301];
    BigInteger[] cat = new BigInteger[11];
    int input, temp;
    boolean first = true;
    
    //fact[0] = BigInteger.ONE;
    //fact[1] = BigInteger.ONE;
    //for(int i = 2; i < 301; i++)
      //fact[i] = fact[i-1].multiply(BigInteger.valueOf(i));
    
    cat[0] = BigInteger.ONE;
    cat[1] = BigInteger.ONE;
    for(int i = 2; i < 11; i++)
    {
      temp = (2*i)*(2*i - 1);
      cat[i] = cat[i-1].multiply(BigInteger.valueOf(temp));
      temp = (i+1)*i;
      cat[i] = cat[i].divide(BigInteger.valueOf(temp));
    }
    
    while(sc.hasNext())
    {
      if(!first)
        System.out.println();
      else
        first = false;
      
      input = sc.nextInt();
      System.out.println(cat[input]);
    }
  }
}