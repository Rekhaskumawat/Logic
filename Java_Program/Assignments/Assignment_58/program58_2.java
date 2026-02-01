//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept Directory name from user and Write names of all files from that
//                Directory into newly created file named as
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 01 /02 /2026
//
////////////////////////////////////////////////////////////////////////////////////////////
/// 
import java.util.*;
import java.io.*;

class program58_2
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        File fobj = null;
        File fileobj = null;

        FileInputStream fiobj = null;
        FileOutputStream foobj = null;
        
        String DirName = null;
        String Header = null;

        boolean bRet = false;

        int iCnt = 0;
        int iRet = 0;
        int i = 0 ;

        byte buffer[] = new byte[100];
        byte bheader[] = new byte[100];


        System.out.println("Enter the Directory name:-");
        DirName = sobj.nextLine();

        fobj = new File(DirName);
        bRet = fobj.exists();

        if(bRet == false)
        {
            System.out.println("there is no such Directory");
            return ;
        }

        File fArr[] = fobj.listFiles();

        fileobj = new File("Marvellous.txt");
        fileobj.createNewFile();

        foobj = new FileOutputStream(fileobj);

        for(iCnt = 0; iCnt <fArr.length ; iCnt++)
        {
            fiobj =  new FileInputStream(fArr[iCnt]);
            
            Header = fArr[iCnt].getName();
            for(i = Header.length() ; i <20 ; i++)
            {
                Header = Header+ " ";
            }
            bheader = Header.getBytes();
            foobj.write(bheader ,0 ,20);
            fiobj.close();
        }

        System.out.println("Data written in file succesfully");
        foobj.close();
        
    } 
}