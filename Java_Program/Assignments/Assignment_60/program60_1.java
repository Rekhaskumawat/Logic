//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept Directory name from user and calculate total size of all files
//                  from that directory
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

        byte Buffer[] = new byte[100];

        int iCnt = 0;
        int iRet = 0;
        long Size = 0;

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

        File fArr[] =  fobj.listFiles();


        for(iCnt = 0 ; iCnt <fArr.length ;iCnt++)
        {
            
            fiobj = new FileInputStream(fArr[iCnt]);

            Size = fArr[iCnt].length();
            System.out.println("Name of file :- "+fArr[iCnt].getName());
            System.out.println("Size of the file :-"+Size);
            
        }

    }
}