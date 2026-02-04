//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept Directory name from user and Display whether it exits or not.
//                  if it exists , display whesther it it a file or directory
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 04 /02 /2026
//
////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class program60_1
{
    public static void main(String A[])throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        File fobj = null;

        FileInputStream fiobj = null;

        String path = null;
        String FileName = null;

        byte Buffer[] = new byte[100];

        int iCnt = 0;
        int iRet = 0;

        System.out.println("Enter the path of file or directory:-");
        path = sobj.nextLine();
        
        fobj = new File(path);

        if(fobj.exists() == false)
        {
            System.out.println("path doesnot exits");
            return;

        }

        System.out.println("Path do exist");

        if(fobj.isDirectory() == true)
        {
            System.out.println("it is a directory");
        }

        if(fobj.isFile()== true)
        {
            System.out.println("it is a regular file");
        }

       

    }
}