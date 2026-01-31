
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept the File name from user and open the file
//                 and display the content on screen
//  Author      : Rekha Shankarlal Kumawat
//  Date        : 29 / 01 / 2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;

class program56_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file Name:-");
        String Name = sobj.nextLine();

        File fobj = new File(Name);

        if(fobj.exists() == false)
        {
           System.out.println("No such file Exist");
        }

        try 
        {
            Scanner Readfile = new Scanner(fobj);

            while (Readfile.hasNext())
            {
                System.out.println("Data Read from file is :- "+Readfile.nextLine());
            }
        }
        catch(FileNotFoundException obj)
        {
            System.out.println("Error :"+obj);
        }
        
        
    }
}