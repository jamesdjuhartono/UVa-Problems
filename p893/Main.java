import java.util.Scanner;
import java.util.Calendar;
import java.util.GregorianCalendar;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    int day, month, year, adv;
    
    
    while(sc.hasNext())
    {
      adv = sc.nextInt();
      day = sc.nextInt();
      month = sc.nextInt();
      year = sc.nextInt();
      
      if(adv == 0 && day == 0 && month == 0 && year == 0)
        break;
      
      Calendar calendar = new GregorianCalendar();
      calendar.set(year,month-1,day);
      calendar.add(Calendar.DAY_OF_MONTH,adv);
      System.out.println(calendar.get(Calendar.DAY_OF_MONTH) + " " + (calendar.get(Calendar.MONTH)+1) + " " + calendar.get(Calendar.YEAR));
    }
  }
}