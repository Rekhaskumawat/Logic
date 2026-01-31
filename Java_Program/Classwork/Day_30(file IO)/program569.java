import java.io.*;
import java.util.*;

class program569
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
           FileOutputStream foobj = new FileOutputStream(fobj);

           String str = "jay Ganesh..";

           foobj.write(str);                // error we cannot write string directly need covert into bytes

        }
        else
        {
            System.out.println("there is no such file");
        }

        sobj.close();
    }
}