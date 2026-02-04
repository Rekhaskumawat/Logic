//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept two input file names and one ouput file name 
//                and merge both files into output files
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 04 /02 /2026
//
////////////////////////////////////////////////////////////////////////////////////////////
/// 
import java.util.*;
import java.io.*;

class program61_4
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        File Srcfobj1 = null;
        File Srcfobj2 = null;
        File Destfobj = null;

        FileInputStream fiobj1 = null;
        FileInputStream fiobj2 = null;
        FileOutputStream foobj = null;
        
        String SrcFileName1 = null;
        String SrcFileName2 = null;
        String DestFileName = null;

        boolean bRet = false;

        int iRet = 0;
    
        byte Buffer[] = new byte[100];

        System.out.println("Enter the first sourec file Name :- ");
        SrcFileName1 = sobj.nextLine();

        System.out.println("Enter the Second sourec file Name :- ");
        SrcFileName2 = sobj.nextLine();

        Srcfobj1 = new File(SrcFileName1);
        bRet = Srcfobj1.exists();

        Srcfobj2 = new File(SrcFileName1);
        bRet = Srcfobj2.exists();

        if(bRet == false)
        {
            System.out.println("there is no Source file "+ SrcFileName1);
            return ;
        }

        if(bRet == false)
        {
            System.out.println("there is no Source file "+ SrcFileName2);
            return ;
        }

        System.out.println("Enter the destination file name :-");
        DestFileName = sobj.nextLine();

        Destfobj = new File(DestFileName);
        Destfobj.createNewFile();

        foobj = new FileOutputStream(Destfobj);

        fiobj1 =  new FileInputStream(Srcfobj1);

        fiobj2 =  new FileInputStream(Srcfobj1);

        while((iRet = fiobj1.read(Buffer)) != -1)
        {
            foobj.write(Buffer , 0 ,iRet);
        }

        while((iRet = fiobj2.read(Buffer)) != -1)
        {
            foobj.write(Buffer , 0 ,iRet);
        }
           
        System.out.println("Data written in file succesfully");
      
        
    } 
}