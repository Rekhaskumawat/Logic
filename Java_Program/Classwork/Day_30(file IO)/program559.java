import java.io.*;
import java.util.*;

class program559
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        String FileName = null;
        File fobj = null;
        boolean bret =false;

        System.out.println("Enter the file name:-");
        FileName = sobj.nextLine();

        fobj = new File(FileName);

        bret = fobj.exists();
        
        if(bret == true)
        {
            System.out.println("File is already present");
        }
        else
        {
            bret = fobj.createNewFile();

            if(bret == true)
            {
                System.out.println("File gets created succesfully");
            }
            else
            {
                System.out.println("Unable to creat file");
            }           
        }
        
        sobj.close();
    }
}