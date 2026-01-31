import java.io.*;
import java.util.*;

class program568
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
            System.out.println("FileName :" +fobj.getName());
            System.out.println("File Absolute path: "+fobj.getAbsolutePath());
            System.out.println("File size : "+fobj.length());
        }
        else
        {
            System.out.println("there is no such file");
        }

        sobj.close();
    }
}