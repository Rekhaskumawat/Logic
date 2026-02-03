///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept Directory name from user and Display file name along with its absolute path
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 03 /02 /2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class program59_2
{
    public static void main(String A[])throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        File fobj = null;

        FileInputStream fiobj = null;

        String DirName = null;
        String Data = null;
        String fpath = null;

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


        File fArr[] =  fobj.listFiles();

        for(iCnt = 0 ; iCnt <fArr.length ;iCnt++)
        {
            if(fArr[iCnt].isFile() == true)
            {
                fiobj = new FileInputStream(fArr[iCnt]);

                Data = fArr[iCnt].getName();
                fpath = fArr[iCnt].getAbsolutePath();
                
                String str = new String(Data);
                
                System.out.println("Absoulte path : "+fpath);
                System.out.println("Name of the file :-"+str);
                
            }
            
        }

    }
}