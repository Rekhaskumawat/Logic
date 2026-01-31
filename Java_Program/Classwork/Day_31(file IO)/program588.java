
import java.io.*;
import java.util.*;

public class program588
{
    public static void main(String A[])
    {
        String str = "Hello";
        byte Arr[]  = str.getBytes();

        byte key = 0x11;

        System.out.println("original Data :"+str);

        // Encryption process

        for( int i =0 ; i < Arr.length ; i++)
        {
            Arr[i] = (byte)( Arr[i] ^ key );
        }

        String Output = new String(Arr);

        System.out.println("Encrypted Data :" +Output);

        // Decryption process

        for( int i =0 ; i < Arr.length ; i++)
        {
            Arr[i] = (byte)( Arr[i] ^ key );
        }

        String Out = new String(Arr);

        System.out.println("Decrypted Data :" +Out);
    }
    
}
