import java.io.*;
import java.util.*;

class program558
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        String FileName = null;
        
        System.out.println("Enter the file name:-");
        FileName = sobj.nextLine();

        File fobj = new File(FileName);

        boolean bret = fobj.createNewFile();

        if(bret == true)
        {
            System.out.println("File gets created succesfully");
        }
        else
        {
            System.out.println("Unable to creat file");
        }

        sobj.close();
    }
}