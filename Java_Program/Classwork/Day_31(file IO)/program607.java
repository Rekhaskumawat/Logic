
// file unpacking code

import java.io.*;
import java.util.*;

class program607
{
    public static void main(String A[]) throws Exception
    {
        // Variable creation
        Scanner sobj = null;
        String FileName = null;
        File fpackobj = null;

        sobj = new Scanner(System.in);

        System.out.println("Enter the name of Packed file :-");
        FileName = sobj.nextLine();

        fpackobj = new File(FileName);

        if(fpackobj.exists() == false)            
        {
            System.out.println("There is no such pakcked file");
            return ;
        }

        
    }
}

