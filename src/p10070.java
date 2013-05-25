import java.util.Scanner;
import java.math.BigInteger;

class Main
{
  public static void main(String[] args)
  {
    BigInteger year;
    BigInteger zero = BigInteger.ZERO;
    BigInteger four = new BigInteger("4");
    BigInteger fifteen = new BigInteger("15");
    BigInteger fifty_five = new BigInteger("55");
    BigInteger one_hundred = new BigInteger("100");
    BigInteger four_hundred = new BigInteger("400");
    boolean special, leap;
    Scanner sc = new Scanner(System.in);
    
    while(sc.hasNext())
    {
      year = sc.nextBigInteger();
      special = false;
      leap = false;
      
      if((year.mod(four) == zero && year.mod(one_hundred) != zero) || (year.mod(four_hundred) == zero)){
        System.out.println("This is leap year.");
        special = true;
        leap = true;
      }
      
      if(year.mod(fifteen) == zero){
        System.out.println("This is huluculu festival year.");
        special = true;
      }
      
      if(leap && year.mod(fifty_five) == zero){
        System.out.println("This is bulukulu festival year.");
        special = true;
      }
      
      if(!special)
        System.out.println("This is an ordinary year.");
      
      if(sc.hasNext())
        System.out.println();
    }
  }
}