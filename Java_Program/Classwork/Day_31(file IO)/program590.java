import java.io.*;
import java.util.*;

class program590
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        String FolderName = null;
        String Packname = null;

        int iRet = 0;
        byte Buffer[] = new byte[1024];

        System.out.println("Enter the name of directory");
        FolderName = sobj.nextLine();

        System.out.println("Enter the name of Packed file");
        Packname = sobj.nextLine();


        File fobj = new File(FolderName);

        if((fobj.exists()) && (fobj.isDirectory()))
        {
            File Packobj = new File(Packname);

            Packobj.createNewFile();

            FileOutputStream foobj = new FileOutputStream(Packobj);

            FileInputStream fiobj = null;

            System.out.println("Directory is present");

            File fArr[] = fobj.listFiles();

            System.out.println("number of files in the folder are :" +fArr.length);

            for(int i =0 ; i < fArr.length ; i++)
            {
                fiobj = new FileInputStream(fArr[i]);
                System.out.println("File name :" +fArr[i].getName() + " , File Size :" +fArr[i].length() + " bytes");

                if(fArr[i].getName().endsWith(".txt"))
                {
                    while ((iRet = fiobj.read(Buffer)) != -1) 
                    {
                        foobj.write(Buffer , 0 ,iRet);
                    }

                }
                fiobj.close();
            }

            System.out.println();
        }
        else
        {
            System.out.println("ther is no such Directory");
        }
    }
}

