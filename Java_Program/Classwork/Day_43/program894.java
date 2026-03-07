import java.util.*;
import java.time.LocalDate;
import java.io.*;

class StudentX
{
    private String Name;
    private int Marks;

    public StudentX(String a , int b)
    {
        this.Name = a;
        this.Marks = b;
    }

    public String getName()
    {
        return this.Name;
    }
    public int getMarks()
    {
        return this.Marks;
    }

    @Override
    public String toString()
    {
        return this.Name+" : "+this.Marks;
    }
}

class program894
{
    public static void main(String A[])
    {
        ArrayList<StudentX> database = new ArrayList<StudentX>();

        StudentX s1 = new StudentX("Sagar", 90);
        StudentX s2 = new StudentX("Rahul", 80);
        StudentX s3 = new StudentX("Pooja", 92);
        StudentX s4 = new StudentX("amit", 72);

        database.add(s1);
        database.add(s2);
        database.add(s3);
        database.add(s4);

        LocalDate lobj = LocalDate.now();

        String FileName = "Marvellous"+lobj+".csv";
    
        try(FileWriter fwobj = new FileWriter(FileName))
        {   

            fwobj.write("Name , Marks\n");  

            for(StudentX s : database)
            {
                fwobj.write(s.getName()+","+s.getMarks()+"\n");
            }
        }
        catch(Exception eobj)
        {
            System.out.println("Exception Occured");
        }
        finally
        {
            System.out.println("Data gets Stored Succesfully");
          
            database.clear();
        }
        
    }
}