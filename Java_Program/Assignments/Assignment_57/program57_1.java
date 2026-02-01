//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept two file name from the user and open first file 
//                and create new file(Second file) and copy the data from
//                first file into newly created file
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 31 /01 /2026
//
////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;
import java.io.*;

class program57_1
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        File fobjsrc = null;
        File fobjdest = null;
        FileInputStream fiobj = null;
        FileOutputStream foobj = null;

        String FileNameSrc = null;
        String FileNameDest = null;

        byte Buffer[] = new byte[1024];

        int iRet = 0;

        System.out.println("Enter the name of source file:-");
        FileNameSrc = sobj.nextLine();

        System.out.println("Enter the name of destination file:-");
        FileNameDest = sobj.nextLine();

        fobjsrc = new File(FileNameSrc);

        if(fobjsrc.exists() == false)
        {
            System.out.println("there is no such file");
            return ;
        }

        fobjdest = new File(FileNameDest);

        fiobj = new FileInputStream(fobjsrc);
        foobj = new FileOutputStream(fobjdest);

        while ((iRet = fiobj.read(Buffer)) != -1) 
        {
            foobj.write(Buffer, 0, iRet);
        }
        System.out.println("File copird Succesfully");

        foobj.close();
        fiobj.close();
        sobj.close();
    }
}