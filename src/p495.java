import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    BigInteger[] fibo = new BigInteger[5001];
    int input;
    
    fibo[0] = new BigInteger("0");
    fibo[1] = new BigInteger("1");
    
    for(int i = 2; i <= 5000; i++)
      fibo[i] = fibo[i-1].add(fibo[i-2]);
    
    while(sc.hasNext())
    {
      input = sc.nextInt();
      System.out.println("The Fibonacci number for " + input + " is " + fibo[input]);
    }
  }
}