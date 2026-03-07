// Question on String

import java.util.Scanner;

class program851
{
    public static void main(String A[])
    {
        String str = "  India   is   My  Country  ";

        System.out.println(str);
        str = str.trim();

        str = str.replaceAll("\\s+"," ");   // important

        String Arr[] = str.split(" ");
        
        System.out.println(Arr.length);

        for(int i = 0 ; i< Arr.length ; i++)
        {
            System.out.println(Arr[i]);
        }
    }
}