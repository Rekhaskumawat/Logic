import java.io.*;
import java.util.*;

class program571
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
            FileInputStream fiobj = new FileInputStream(fobj);
            
            byte Arr[] = new byte[50];
            
            fiobj.read(Arr);
            System.out.println(Arr);

        }
        else
        {
            System.out.println("there is no such file");
        }

        sobj.close();
    }
}