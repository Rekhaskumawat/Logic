//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept file name from user and split that file into seprate files
//                  (FirstHalf and SecondHalf)
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 04 /02 /2026
//
////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class program61_5
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        File Srcfobj1 = null;
        File Destfobj1 = null;
        File Destfobj2 = null;

        FileInputStream fiobj1 = null;
        FileOutputStream foobj1 = null;
        FileOutputStream foobj2 = null;
        
        String SrcFileName = null;

        boolean bRet = false;

        int iRet = 0;
        long ReadBytes = 0;
        long HalfSize = 0;
        long Size  = 0 ;
    
        byte Buffer[] = new byte[100];

        System.out.println("Enter the sourec file Name :- ");
        SrcFileName = sobj.nextLine();

        Srcfobj1 = new File(SrcFileName);
        bRet = Srcfobj1.exists();

        if(bRet == false)
        {
            System.out.println("there is no Source file ");
            return ;
        }

        Destfobj1 = new File("FirstHalf.txt");
        Destfobj1.createNewFile();

        Destfobj2 = new File("SecondHalf.txt");
        Destfobj2.createNewFile();

        foobj1 = new FileOutputStream(Destfobj1);
        foobj2 = new FileOutputStream(Destfobj2);

        fiobj1 =  new FileInputStream(Srcfobj1);

        Size = Srcfobj1.length();
        HalfSize = Size/2 ;

        while((ReadBytes < HalfSize ) && (iRet = fiobj1.read(Buffer)) != -1)
        {
            if(ReadBytes + iRet > HalfSize)
            {
                iRet = (int)(HalfSize - ReadBytes);
            }

            foobj1.write(Buffer , 0 ,iRet);
            ReadBytes = ReadBytes +  iRet;
        }

         while((iRet = fiobj1.read(Buffer)) != -1)
        {
            foobj2.write(Buffer, 0, iRet);
        }
           
        System.out.println("Data written in file succesfully");
    
        
    } 

}
