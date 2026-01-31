
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept directory name from user
//                  and display all names of file from that Directory
//  Author      : Rekha Shankarlal Kumawat
//  Date        : 29 / 01 / 2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.Scanner;
import java.io.File;


class program56_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Directory name:-");
        String Name = sobj.nextLine();


        File fobj = new File(Name);

        String[] content = fobj.list();

        
        if(content != null)
        {
            System.out.println("List of file and directories");
            for(String filename :content)
            {
                System.out.println("Filename :"+ filename);
                
            }
        }
        else
        {
            System.out.println("There are no files in the directory");
        }
    }
}