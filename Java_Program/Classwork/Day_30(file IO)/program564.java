import java.io.*;
import java.util.*;

class program564
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        String FileName = null;
        FileReader frobj = null;
        File fobj = null;
        boolean bret =false;

        System.out.println("Enter the file name:-");
        FileName = sobj.nextLine();

        fobj = new File(FileName);
        bret = fobj.exists();

        if(bret == true)
        {
            frobj = new FileReader(FileName);    
        }
        else
        {
            System.out.println("there is no such file");
        }
           
        if(frobj != null)
        {
         frobj.close();
        }

        sobj.close();
    }
}