//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept file name from user and handle all possible file related exceptions properly
//
//  Author      : Rekha Shankarlal Kumawat
//
//  Date        : 04 /02 /2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
import java.util.*;
import java.io.*;

class program62_5
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        File fobjSrc = null;
        File fobjDest =  null;
        String FileName = null;

        FileInputStream fiobj = null;
        FileOutputStream foobj = null;

        byte Buffer[] = new byte[1024];

        int iRet  = 0;

        System.out.println("Enter the file Name :- ");
        FileName = sobj.nextLine();

        fobjSrc = new File(FileName);
        fobjDest = new File("Demo");

        try
        {
            fiobj = new FileInputStream(fobjSrc);

            foobj = new FileOutputStream(fobjDest);

            while ((iRet = fiobj.read(Buffer)) != -1)
            {
                foobj.write(Buffer, 0, iRet);   
            }

            foobj.close();
            fiobj.close();
            sobj.close();
        }
        catch(FileNotFoundException fnobj)
        {
            System.out.println("Exception : "+fnobj);
        }
        catch(IOException ioobj)
        {
            System.out.println("Exception: "+ioobj);
        }
        
    } 
}