//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept file name from and integer N from user and copy first N bytes into a new file
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 04 /02 /2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
import java.util.*;
import java.io.*;

class program62_2
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        File Srcfobj = null;
        File Destfobj = null;

        FileInputStream fiobj = null;
        FileOutputStream foobj = null;
        
        String SrcFileName = null;
        String DestFileName = null;

        boolean bRet = false;

        byte Buffer[] = new byte[100];

        int iRet = 0;
        int toRead = 0;

        long ReadBytes = 0;

        System.out.println("Enter the sourec file Name :- ");
        SrcFileName = sobj.nextLine();

        Srcfobj = new File(SrcFileName);
        bRet = Srcfobj.exists();

        if(bRet == false)
        {
            System.out.println("there is no such File");
            return ;
        }

        System.out.println("Enter the destination file name :- ");
        DestFileName = sobj.nextLine();

        System.out.println("Enter the number of bytes to be read :-");
        toRead = sobj.nextInt();
        
        Destfobj = new File(DestFileName);
        Destfobj.createNewFile();

        foobj = new FileOutputStream(Destfobj);
        
        fiobj =  new FileInputStream(Srcfobj);

        while((ReadBytes < toRead ) && (iRet = fiobj.read(Buffer)) != -1)
        {
            if(ReadBytes + iRet > toRead)
            {
                iRet = (int)(toRead - ReadBytes);
            }

            foobj.write(Buffer , 0 ,iRet);
            ReadBytes = ReadBytes +  iRet;
        }

        System.out.println("Data written Successfully");
   
        
    } 
}