//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept file name from and integer N from user and create a backup copy of it
//                  with name original_backup.ext
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 06 /02 /2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
import java.util.*;
import java.io.*;

class program62_4
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        File Srcfobj = null;
        File Destfobj = null;

        FileInputStream fiobj = null;
        FileOutputStream foobj = null;
        
        String SrcFileName = null;

        boolean bRet = false;

        byte Buffer[] = new byte[100];

        int iRet = 0;
        
        System.out.println("Enter the sourec file Name :- ");
        SrcFileName = sobj.nextLine();

        Srcfobj = new File(SrcFileName);
        bRet = Srcfobj.exists();

        if(bRet == false)
        {
            System.out.println("there is no such File");
            return ;
        }

        Destfobj = new File("original_backup.ext");
        Destfobj.createNewFile();

        foobj = new FileOutputStream(Destfobj);
        
        fiobj =  new FileInputStream(Srcfobj);

        while((iRet = fiobj.read(Buffer)) != -1)
        {
            foobj.write(Buffer , 0 ,iRet);
        }
        System.out.println("Data written Successfully");
   
        
    } 
}