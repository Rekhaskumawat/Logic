//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept File name from user and calculate checksum of that file and display
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 31 /01 /2026
//
////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;
import java.io.*;

class program57_4
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
        bRet = fobj.();

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