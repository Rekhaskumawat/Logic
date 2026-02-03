//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept Directory name from user and Display only sub-Directory from that
//                  Directory
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 03 /02 /2026
//
////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class program59_3
{
    public static void main(String A[])throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        File fobj = null;

        FileInputStream fiobj = null;

        String DirName = null;
        String Data = null;

        byte Buffer[] = new byte[100];

        int iCnt = 0;
        int iRet = 0;

        System.out.println("Enter the name of the Directory:-");
        DirName = sobj.nextLine();

        fobj = new File(DirName);

        if(fobj.exists() == false)
        {
            System.out.println("There is no such directory");
            return ;
        }

        if(fobj.isDirectory() == false)
        {
            System.out.println("There is no such directory");
            return ;
        }


        File fArr[] =  fobj.listFiles(File::isDirectory);

        if(fArr != null)
        {
            for(File fdobj : fArr)
            {
                System.out.println("Filder Nmame : "+fdobj.getName());
            }
        }

    }
}