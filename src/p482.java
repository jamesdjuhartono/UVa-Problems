import java.util.Scanner;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    int[] in_arr = new int[1000000];
    String[] out_arr = new String[1000000];
    int numCase, counter;
    String dummy;
    
    numCase = sc.nextInt();
    dummy = sc.nextLine();
    
    for(int k = 0; k < numCase; k++)
    {
      String str = sc.nextLine();
      str = sc.nextLine();
      String text[] = str.split(" ");
      
      
      for(int i = 1; i <= text.length; i++)
        in_arr[i] = Integer.parseInt(text[i-1]);
      
      str = sc.nextLine();
      String text2[] = str.split(" ");
      
      for(int i = 1; i <= text2.length; i++)
        out_arr[in_arr[i]] = text2[i-1];
      
      for(int i = 1; i <= text2.length; i++)
        System.out.println(out_arr[i]);
      
      if(k != numCase-1)
        System.out.println();
    }
  }
}