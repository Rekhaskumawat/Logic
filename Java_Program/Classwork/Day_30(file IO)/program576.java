import java.io.*;
import java.util.*;

class program576
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        String FileName = null;
        File fobj = null;
        boolean bret =false;
        byte Buffer[] = new byte[100];
        int iRet = 0;
        String str = null;
        

        System.out.println("Enter the file name:-");
        FileName = sobj.nextLine();

        fobj = new File(FileName);
        bret = fobj.exists();

        if(bret == true)
        {
            FileInputStream fiobj = new FileInputStream(fobj);
            
            while((iRet = fiobj.read(Buffer)) != -1)
            {
                str = new String(Buffer , 0 ,iRet);
                System.out.print(str);
                str = null ;
            }

            System.out.println(" ");

        }
        else
        {
            System.out.println("there is no such file");
        }

        sobj.close();
    }
}

