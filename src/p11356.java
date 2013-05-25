import java.util.Scanner;
import java.util.Calendar;
import java.util.GregorianCalendar;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    Calendar cal = new GregorianCalendar();
    int numCase;
    String input;
    String[] months = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int d,m,y, n;
    
    numCase = sc.nextInt();
    for(int i = 1; i <= numCase; i++)
    {
      input = sc.next();
      String[] text = input.split("-");
      y = Integer.parseInt(text[0]);
      d = Integer.parseInt(text[2]);
      if(text[1].equals("January"))   m = 0;
      else if(text[1].equals("February"))  m = 1;
      else if(text[1].equals("March"))  m = 2;
      else if(text[1].equals("April"))  m = 3;
      else if(text[1].equals("May"))  m = 4;
      else if(text[1].equals("June"))  m = 5;
      else if(text[1].equals("July"))  m = 6;
      else if(text[1].equals("August"))  m = 7;
      else if(text[1].equals("September"))  m = 8;
      else if(text[1].equals("October"))  m = 9;
      else if(text[1].equals("November"))  m = 10;
      else  m = 11;
      
      n = sc.nextInt();
      cal.set(y,m,d);
      cal.add(Calendar.DATE,n);
      
      y = cal.get(Calendar.YEAR);
      d = cal.get(Calendar.DATE);
      m = cal.get(Calendar.MONTH);
      System.out.print("Case " + i + ": " + y + "-" + months[m] + "-");
      if(d < 10)
        System.out.println("0" + d);
      else
        System.out.println(d);
    }
  }
}