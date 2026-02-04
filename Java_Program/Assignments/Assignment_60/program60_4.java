//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept Directory name from user and File extenision from user 
//                  and dsplia only fies having that extension
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

        String DirName = null;
        String Extension = null;
        String FileName = null;

        byte Buffer[] = new byte[100];

        int iCnt = 0;
        int iRet = 0;

        System.out.println("Enter the name of the Directory:-");
        DirName = sobj.nextLine();

        System.out.println("Enter file extention:- ");
        Extension = sobj.nextLine();

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

        File fArr[] =  fobj.listFiles();
        System.out.println(("Files name with the extenstion "+Extension));
        for(iCnt = 0 ; iCnt <fArr.length ;iCnt++)
        {
            fiobj = new FileInputStream(fArr[iCnt]);

            if(fArr[iCnt].getName().endsWith(Extension))
            {
                FileName = fArr[iCnt].getName();

                System.out.println(FileName);
            }
        }

       

    }
}