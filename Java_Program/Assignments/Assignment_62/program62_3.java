//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept file name from and integer N from user and copy last N bytes into a new file
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 06 /02 /2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
import java.util.*;
import java.io.*;

class program62_3
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

        long Size = 0;
        long StartOffset = 0;

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

        Size = Srcfobj.length();

        StartOffset = Size - (long)toRead ;

        fiobj.skip(StartOffset);

        while((iRet = fiobj.read(Buffer)) != -1)
        {
            foobj.write(Buffer , 0 ,iRet);
        }
        System.out.println("Data written Successfully");
   
        
    } 
}