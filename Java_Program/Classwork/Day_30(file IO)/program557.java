import java.io.*;
import java.util.*;



class program557
{
    public static void main(String A[]) throws Exception
    {
        File fobj = new File("Demo.txt");

        boolean bret = fobj.createNewFile();

        if(bret == true)
        {
            System.out.println("File gets created succesfully");
        }
        else
        {
            System.out.println("Unable to creat file");
        }
    }
}