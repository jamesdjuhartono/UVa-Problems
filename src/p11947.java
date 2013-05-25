import java.util.Scanner;
import java.util.Calendar;
import java.util.GregorianCalendar;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    Calendar cal = new GregorianCalendar();
    int numCase, m, d, y;
    String zodiac, input, mon, da, ye;
    
    numCase = sc.nextInt();
    for(int i = 1; i <= numCase; i++)
    {
      input = sc.next();
      mon = input.substring(0,2);
      da = input.substring(2,4);
      ye = input.substring(4);
      
      m = Integer.parseInt(mon);
      d = Integer.parseInt(da);
      y = Integer.parseInt(ye);
      
      cal.set(y,m-1,d);
      cal.add(Calendar.WEEK_OF_YEAR,40);
      
      m = cal.get(Calendar.MONTH) + 1;
      d = cal.get(Calendar.DATE);
      y = cal.get(Calendar.YEAR);
      
      if((m == 1 && d >= 21) || (m == 2 && d <= 19)) zodiac = "aquarius";
      else if((m == 2 && d >= 20) || (m == 3 && d <= 20)) zodiac = "pisces";
      else if((m == 3 && d >= 21) || (m == 4 && d <= 20)) zodiac = "aries";
      else if((m == 4 && d >= 21) || (m == 5 && d <= 21)) zodiac = "taurus";
      else if((m == 5 && d >= 22) || (m == 6 && d <= 21)) zodiac = "gemini";
      else if((m == 6 && d >= 22) || (m == 7 && d <= 22)) zodiac = "cancer";
      else if((m == 7 && d >= 23) || (m == 8 && d <= 21)) zodiac = "leo";
      else if((m == 8 && d >= 22) || (m == 9 && d <= 23)) zodiac = "virgo";
      else if((m == 9 && d >= 24) || (m == 10 && d <= 23)) zodiac = "libra";
      else if((m == 10 && d >= 24) || (m == 11 && d <= 22)) zodiac = "scorpio";
      else if((m == 11 && d >= 23) || (m == 12 && d <= 22)) zodiac = "sagittarius";
      else zodiac = "capricorn";
      
      System.out.print(i + " ");
      if(m < 10) System.out.print("0" + m + "/");
      else       System.out.print(m + "/");
      
      if(d < 10) System.out.print("0" + d + "/");
      else       System.out.print(d + "/");      
      System.out.println(y + " " + zodiac);
    }
  }
}