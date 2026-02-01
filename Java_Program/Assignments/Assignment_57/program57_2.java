//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept file name from the user and check whether that file
//                  is regular file or not 
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 31 /01 /2026
//
////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;
import java.io.*;

class program57_2
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        File fobj = null;
        
        String FileName = null;
        boolean bRet = false;


        System.out.println("Enter the file name:-");
        FileName = sobj.nextLine();

        fobj = new File(FileName);
        bRet = fobj.isFile();

        if(bRet == true)
        {
            System.out.println("File is regular file");
        }
        else
        {
            System.out.println("File is not a regular file");
        }
    }
}