import java.io.*;
import java.util.*;

class program562
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        String FileName = null;
        FileWriter fwobj = null;
        boolean bret =false;

        System.out.println("Enter the file name:-");
        FileName = sobj.nextLine();

        fwobj = new FileWriter(FileName);               // filewrite also create file if ther is no such file
        fwobj.write("jay ganesh...");               // while writtinf it overwrite the new data
        
        fwobj.close();
        sobj.close();
    }
}