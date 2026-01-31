import java.io.*;
import java.util.*;

class program577
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        String FileNameSrc = null;
        String FileNameDest = null ;

        File fobjsrc = null;
        File fobjdest = null;

        boolean bret =false;

        byte Buffer[] = new byte[1024];
        int iRet = 0;
        

        System.out.println("Enter the name of souce file:-");
        FileNameSrc = sobj.nextLine();

        System.out.println("Enter the name of destination file:-");
        FileNameDest = sobj.nextLine();

        fobjsrc = new File(FileNameSrc);
        bret = fobjsrc.exists();

        if(bret == true)
        {
            fobjdest = new File(FileNameDest);

            FileInputStream fiobj = new FileInputStream(fobjsrc);
            FileOutputStream foobj = new FileOutputStream(fobjdest);
            
            while((iRet = fiobj.read(Buffer)) != -1)
            {
                foobj.write(Buffer , 0 ,iRet);
            }

            System.out.println("File copy Succesful");

            fiobj.close();
            foobj.close();

        }
        else
        {
            System.out.println("there is no source file");
        }

        sobj.close();
    }
}

