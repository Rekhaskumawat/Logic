//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept file name from user and display total number of bytes read from that file
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 04 /02 /2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
import java.util.*;
import java.io.*;

class program62_1
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        File Srcfobj = null;

        FileInputStream fiobj = null;
        
        String SrcFileName = null;

        boolean bRet = false;
        byte Buffer[] = new byte[100];

        int iRet = 0;
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

        fiobj =  new FileInputStream(Srcfobj);

        while((iRet = fiobj.read(Buffer)) != -1)
        {
            ReadBytes = ReadBytes + iRet;
        }
           
        System.out.println("Total bytes read :- "+ReadBytes);
   
        
    } 
}