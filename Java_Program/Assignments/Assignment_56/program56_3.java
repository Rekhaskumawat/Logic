
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept the File name from user and open the file in write mode
//                 and write some data at the end of the file
//  Author      : Rekha Shankarlal Kumawat
//  Date        : 29 / 01 / 2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;

class program56_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file Name:-");
        String Name = sobj.nextLine();

        System.out.println("Enter the text to be written in file :-");
        String data = sobj.nextLine();

        try
        {
            FileWriter fobj = new FileWriter(Name , true);              // true =  file is open in append mode
            fobj.write(data);
            fobj.close();

            System.out.println("Data written in the file succesfully");
        }
        catch(IOException iobj)
        {
            System.out.println("Error :"+ iobj);
        }
        
        
        
    }
}