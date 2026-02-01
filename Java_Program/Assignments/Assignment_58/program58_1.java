//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept Directory name from user and Display all names of files of
//                  that directory which are regular files
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 31 /01 /2026
//
////////////////////////////////////////////////////////////////////////////////////////////
/// 
import java.util.*;
import java.io.*;

class program58_1
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        File fobj = null;
        
        String DirName = null;
        boolean bRet = false;

        int iCnt = 0;


        System.out.println("Enter the Directory name:-");
        DirName = sobj.nextLine();

        fobj = new File(DirName);
        bRet = fobj.exists();

        File fArr[] = fobj.listFiles();

        if(bRet == false)
        {
            System.out.println("there is no such Directory");
            return ;
        }

        for(iCnt = 0 ; iCnt < fArr.length ; iCnt++)
        {
            if(fArr[iCnt].isFile() == true)
            {
           
                System.out.println("FileName : "+fArr[iCnt].getName() + " FileSize : " +fArr[iCnt].length() + "Bytes");

            }
        }

        System.out.println("End of the file");
        
    } 
}