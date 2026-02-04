//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept Directory name from user and Display the name of the smallest file
//                  (by Size)
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 04 /02 /2026
//
////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class program60_3
{
    public static void main(String A[])throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        File fobj = null;

        FileInputStream fiobj = null;

        String DirName = null;
        String FileName = null;

        byte Buffer[] = new byte[100];

        int iCnt = 0;
        int iRet = 0;
        long MinSize = 0;

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

        MinSize = fArr[0].length();
        FileName = fArr[0].getName();
        for(iCnt = 0 ; iCnt <fArr.length ;iCnt++)
        {
            fiobj = new FileInputStream(fArr[iCnt]);

            if(MinSize > fArr[iCnt].length())
            {
                MinSize = fArr[iCnt].length();
                FileName = fArr[iCnt].getName();
            }
        }

        System.out.println("File which have minimum size :- " +FileName);

    }

}
