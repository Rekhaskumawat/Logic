//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept Directory name from user and Display count of total files 
//                  and total folders
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 03 /02 /2026
//
////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class program59_4
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
        int fCount = 0;
        int dCount = 0;

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

        File RfArr[] =  fobj.listFiles();

        for(iCnt = 0 ; iCnt <RfArr.length ;iCnt++)
        {
            if(RfArr[iCnt].isFile() == true)
            {
                fiobj = new FileInputStream(RfArr[iCnt]);

                fCount++;
            }
            
        }

        File dfArr[] =  fobj.listFiles(File::isDirectory);

        if(dfArr != null)
        {
            for(File fdobj : dfArr)
            {
                dCount++;
            }
        }

        System.out.println("total file into the directory : "+fCount);
        System.out.println("total subdirectory inot the directory: "+dCount);
    }
}