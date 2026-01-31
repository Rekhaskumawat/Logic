import java.io.*;
import java.util.*;

class program566
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        String FileName = null;
        FileReader frobj = null;
        File fobj = null;
        boolean bret =false;
        

        System.out.println("Enter the file name:-");
        FileName = sobj.nextLine();

        fobj = new File(FileName);
        bret = fobj.exists();

        if(bret == true)
        {
            frobj = new FileReader(FileName);  
            
            char buffer [] = new char[50];

            frobj.read(buffer ,0 ,13);

            System.out.println("Data from file :"+(String)buffer);              // Error wrong way of typecasting

        }
        else
        {
            System.out.println("there is no such file");
        }
           
        if(frobj != null)
        {
         frobj.close();
        }

        sobj.close();
    }
}