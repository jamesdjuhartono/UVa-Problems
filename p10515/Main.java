import java.io.*;
import java.math.*;

class Main 
{
    public static void main(String[] args) {
        BufferedReader buf = new BufferedReader(new InputStreamReader(System.in));
        String str;
        try{
            while((str = buf.readLine()) != null){
                String a[]= str.split(" ");
                if(a[0].equals("0") && a[1].equals("0"))  break;
                BigInteger n = new BigInteger(a[0]);
                BigInteger m = new BigInteger(a[1]);
                System.out.println(n.modPow(m, new BigInteger("10")));
            }
        }
        catch(IOException ioe){
        }
    }
}