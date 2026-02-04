//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept Source file name and destination file name from user
//                  and copy data from source to destination using byte buffer[]
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 04 /02 /2026
//
////////////////////////////////////////////////////////////////////////////////////////////
/// 
import java.util.*;
import java.io.*;

class program61_2
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

        int iRet = 0;
    
        byte Buffer[] = new byte[100];

        System.out.println("Enter the sourec file Name :- ");
        SrcFileName = sobj.nextLine();

        Srcfobj = new File(SrcFileName);
        bRet = Srcfobj.exists();

        if(bRet == false)
        {
            System.out.println("there is no such File");
            return ;
        }

        System.out.println("Enter the destination file name :-");
        DestFileName = sobj.nextLine();

        Destfobj = new File(DestFileName);
        Destfobj.createNewFile();

        foobj = new FileOutputStream(Destfobj);

        fiobj =  new FileInputStream(Srcfobj);

        while((iRet = fiobj.read(Buffer)) != -1)
        {
            foobj.write(Buffer , 0 ,iRet);
        }
           
        System.out.println("Data written in file succesfully");

    } 
}