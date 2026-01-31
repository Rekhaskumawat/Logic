
// file unpacking code

import java.io.*;
import java.util.*;

class program610
{
    public static void main(String A[]) throws Exception
    {
        // Variable creation
        Scanner sobj = null;
        String FileName = null;
        File fpackobj = null;
        FileInputStream fiobj = null;
        File fobj = null;
        byte bHeader[] = new byte[100];
        String Header = null;
        String Tokens[] = null;

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

        
        
    }
}

