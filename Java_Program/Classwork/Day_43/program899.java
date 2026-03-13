import java.util.*;
import java.time.LocalDate;
import java.io.*;


// Done
class StudyLog
{
    private LocalDate Date;
    private String Subject;
    private double Duration;
    private String Description;

    public StudyLog(LocalDate a , String b , double c , String d)
    {
        this.Date = a ;
        this.Subject = b;
        this.Duration = c;
        this.Description = d;
    }

    public LocalDate getDate()
    {
        return this.Date;
    }
    public String getSubject()
    {
        return this.Subject;
    }
    public double getDuration()
    {
        return this.Duration;
    }
    public String getDescription()
    {
        return this.Description;
    }
    @Override
    public String toString()
    {
        return this.Date+" | "+this.Subject +" | "+this.Duration+" | "+this.Description;
    }
}

class StudyTracker
{
    public ArrayList<StudyLog> Database = new ArrayList<StudyLog>();

    public void InsertLog()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("---------------------------------------------------");
        System.out.println("---------Enter Valid Details of Your Study---------");
        System.out.println("---------------------------------------------------");

        LocalDate Dateobj = LocalDate.now();

        System.out.println("Please Enter the Name of Subject like (C/C++/Java/Python): " );
        String sub = sobj.nextLine();

        System.out.println("Enter the time period of your study in hours : ");
        double dur = sobj.nextDouble();
        sobj.nextLine();

        System.out.println("Please provide Short Description of Your Study: ");
        String desc= sobj.nextLine();

        StudyLog studyobj = new StudyLog(Dateobj, sub, dur, desc);
        Database.add(studyobj);

        System.out.println("study log gets stored succesfully");
        System.out.println("---------------------------------------------------");

    }
    public void DisplayLog()
    {
        System.out.println("----------------------------------------------------");

        if(Database.isEmpty())
        {
            System.out.println("-------------------Nothing to display---------------");
            System.out.println("----------------------------------------------------");

            return ;
        }
        System.out.println("-------Log Report of Marvellous Study Tracker-------");
        System.out.println("----------------------------------------------------");

        for(StudyLog s : Database)
        {
            System.out.println(s);
        }

        System.out.println("---------------------------------------------------");

    }

    public void ExportCSV()
    {
        if(Database.isEmpty())
        {
            System.out.println("----------------------------------------------------");
            System.out.println("-------------------Nothing to Export---------------");
            System.out.println("----------------------------------------------------");
            return ;
        }

        String FileName = "MarvellousStudyTracker.csv";

        try(FileWriter fwobj = new FileWriter(FileName))
        {
            fwobj.write("Date , Subject , Duration , Description \n");

            for(StudyLog s : Database)
            {
                fwobj.write(s.getDate()+","+
                            s.getSubject().replace(",", "/")+","+
                            s.getDuration()+","+
                            s.getDescription().replace(",", "/")+"\n");
            }

            System.out.println("Data gets Exported in CSV : "+FileName);
        }
        catch(Exception eobj)
        {
            System.out.println("Exception Occured in CSV handling");
        }
    }
}
class program899
{
    public static void main(String A[])
    {
        StudyTracker stobj = new StudyTracker();
        stobj.InsertLog();
        stobj.DisplayLog();
        stobj.ExportCSV();
    }
}