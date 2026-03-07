// Question on String

import java.util.Scanner;

class program849
{
    public static void main(String A[])
    {
        String str = "  India   is   My  Country  ";

        System.out.println(str);
        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        System.out.println(str);

        String Arr[] = str.split(" ");
        
        System.out.println(Arr.length);
    }
}