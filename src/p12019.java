import java.util.Scanner;
import java.util.Calendar;
import java.util.GregorianCalendar;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    Calendar cal = new GregorianCalendar();
    int numCase, m, d;
    String[] day  = {"","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    
    numCase = sc.nextInt();
    for(int i = 0; i < numCase; i++)
    {
      m = sc.nextInt();
      d = sc.nextInt();
      
      cal.set(2011,m-1,d);
      System.out.println(day[cal.get(Calendar.DAY_OF_WEEK)]);
    }
    
  }
}