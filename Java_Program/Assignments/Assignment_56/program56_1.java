///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept the File name from user  and open the file
//  Author      : Rekha Shankarlal Kumawat
//  Date        : 29 / 01 / 2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////



import java.util.Scanner;
import java.io.File;                    // pacakge for file input output operation


class program56_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file Name:-");
        String Name = sobj.nextLine();

        File fobj = new File(Name);

        if(fobj != null)
        {
            System.out.println("File Succesfully opened");
        }
        else
        {
            System.out.println("No such file Exist");
        }
    }
}