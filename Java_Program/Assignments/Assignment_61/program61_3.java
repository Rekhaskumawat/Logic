//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept file name and one string from the user and append that string
//                  at the end of file
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 04 /02 /2026
//
////////////////////////////////////////////////////////////////////////////////////////////
/// 
import java.util.*;
import java.io.*;

class program61_3
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        File fobj = null;

        FileOutputStream foobj = null;
        
        String FileName = null;
        String str = null;

        boolean bRet = false;

        int iRet = 0;
    
        byte Buffer[] = new byte[100];

        System.out.println("Enter the sourec file Name :- ");
        FileName = sobj.nextLine();

        fobj = new File(FileName);
        bRet = fobj.exists();

        if(bRet == false)
        {
            System.out.println("there is no such File");
            return ;
        }

        System.out.println("Enter the String to be written in file :-");
        str = sobj.nextLine();

        foobj = new FileOutputStream(fobj , true);              // true if for append 

        Buffer = str.getBytes();

        foobj.write(Buffer);
           
        System.out.println("Data written in file succesfully");
        
    } 
}