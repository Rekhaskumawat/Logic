import java.io.*;
import java.util.*;

class program563
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        String FileName = null;
        FileReader frobj = null;
        boolean bret =false;

        System.out.println("Enter the file name:-");
        FileName = sobj.nextLine();

        frobj = new FileReader(FileName);             
        
        frobj.close();
        sobj.close();
    }
}