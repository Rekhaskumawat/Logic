//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept Directory name from user and create that Directory 
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 31 /01 /2026
//
////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;
import java.io.*;

class program57_3
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        File fobj = null;
        
        String DirName = null;
        boolean bRet = false;


        System.out.println("Enter the Directory name:-");
        DirName = sobj.nextLine();

        fobj = new File(DirName);
        bRet = fobj.mkdir();

        if(bRet == true)
        {
            System.out.println("Directory is created succesfully");
        }
        else
        {
            System.out.println("Directory is not created");
        }
    }
}