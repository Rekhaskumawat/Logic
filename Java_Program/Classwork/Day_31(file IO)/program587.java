
import java.io.*;
import java.util.*;

public class program587
{
    public static void main(String A[])
    {
        String str = "Hello";
        byte Arr[]  = str.getBytes();

        byte key = 0x11;

        System.out.println("original Data :"+str);
        for( int i =0 ; i < Arr.length ; i++)
        {
            Arr[i] = (byte)( Arr[i] ^ key );
        }

        String Output = new String(Arr);

        System.out.println("Encryptred Data :" +Output);
    }
    
}
