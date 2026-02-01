//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept directory name from user and  write data of all files into
//                one newly created file named as "Marvellous.txt"
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
        int j = 0;

        byte Buffer[] = new byte[100];

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

        fileobj = new File("MarvellousX.txt");
        fileobj.createNewFile();

        foobj = new FileOutputStream(fileobj);

        for(iCnt = 0; iCnt <fArr.length ; iCnt++)
        {
            fiobj =  new FileInputStream(fArr[iCnt]);

            while ((iRet = fiobj.read(Buffer)) != -1) 
            {
                foobj.write(Buffer , 0 ,iRet);
            }
            fiobj.close();
        }

        System.out.println("Data written in file succesfully");
        foobj.close();
        
    } 
}