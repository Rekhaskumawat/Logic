
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept the File name from user
//                 and create new file of that if it is not existing
//  Author      : Rekha Shankarlal Kumawat
//  Date        : 29 / 01 / 2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;

class program56_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file Name:-");
        String Name = sobj.nextLine();

        try
        {
            File fobj = new File(Name);

            if(fobj.createNewFile() == true)
            {
                System.out.println("File get succesfully created with the name :- "+fobj.getName());
            }
            else
            {
                System.out.println("File already exist");
            }

        }
        catch(IOException iobj)
        {
            System.out.println("Error :"+ iobj);
        }   
    }
}