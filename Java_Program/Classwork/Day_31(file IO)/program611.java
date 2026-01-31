
// file unpacking code

import java.io.*;
import java.util.*;

class program611
{
    public static void main(String A[]) throws Exception
    {
        // Variable creation
        Scanner sobj = null;

        String FileName = null;
        String Header = null;

        File fpackobj = null;
        FileInputStream fiobj = null;
        FileOutputStream foobj = null ;
        File fobj = null;

        byte bHeader[] = new byte[100];
        byte Buffer[] = new byte[100];
        String Tokens[] = null;

        int FileSize = 0 ;

        sobj = new Scanner(System.in);

        System.out.println("Enter the name of Packed file :-");
        FileName = sobj.nextLine();

        fpackobj = new File(FileName);

        if(fpackobj.exists() == false)            
        {
            System.out.println("There is no such pakcked file");
            return ;
        }

        fiobj = new FileInputStream(fpackobj);

        //read the headers
        fiobj.read(bHeader, 0, 100);
        Header = new String(bHeader);

        Header = Header.trim();
        Tokens = Header.split(" ");

        System.out.println("Filename :"+Tokens[0]);
        System.out.println("Size :"+Tokens[1]);

        fobj = new File(Tokens[0]);

        fobj.createNewFile();
        foobj = new FileOutputStream(fobj);

        FileSize =Integer.parseInt(Tokens[1]);
        Buffer = new byte[FileSize];

        fiobj.read(Buffer, 0, FileSize);
        foobj.write(Buffer , 0 ,FileSize);

        
    }
}

