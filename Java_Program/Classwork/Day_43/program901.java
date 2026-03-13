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

    public void SummaryByDate()
    {
        
    }
    public void SummaryBySubject()
    {
        System.out.println("----------------------------------------------------");
        if(Database.isEmpty())
        {
            System.out.println("------Nothing To Display as Database is Empty-------");
            System.out.println("----------------------------------------------------");
            return ;
        }

        System.out.println("---------Summary By Subject From StudyTraker--------");
        System.out.println("----------------------------------------------------");

        TreeMap<String  , Double> tobj = new TreeMap<String , Double>();

        String s = null;
        double d = 0.0 , old = 0.0;

        for(StudyLog sobj :Database)
        {
            s = sobj.getSubject();
            d= sobj.getDuration();

            if(tobj.containsKey(s))
            {
                old = tobj.get(s);
                tobj.put(s, d+old);
            }
            else
            {
                tobj.put(s, d);
            }

            // Display the details as per subject

            for(String str : tobj.keySet())
            {
                System.out.println("Subject : "+str+" Total study duration : "+tobj.get(str));
            }
            System.out.println("----------------------------------------------------");

        }
        
    }

}
class program901
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        StudyTracker stobj = new StudyTracker();

        System.out.println("----------------------------------------------------");
        System.out.println("--------Welcomr to marveloous Study Tracker --------");
        System.out.println("----------------------------------------------------");

        int iChoice = 0;

        do
        {
            System.out.println("Please Select Appropriate Option");
            System.out.println("1 : Insert New Study Log");
            System.out.println("2 : View all Study Log");
            System.out.println("3 : Export study Log to CSV file");
            System.out.println("4 : Summary of the Study Log by Data");
            System.out.println("5 : Summary of the Study Log by Subject");
            System.out.println("6 : Exist the Application");

            System.out.println("enter Your Choice :");
            iChoice = sobj.nextInt();

            switch (iChoice) 
            {
                // Inser new Study Log
                case 1:
                    stobj.InsertLog();
                    break;
                
                // View All Study log
                case 2:
                    stobj.DisplayLog();
                    break;

                // Export Study log to CSV
                case 3:
                    stobj.ExportCSV();
                    break;
                // Summary of study log by Date
                case 4:
                    stobj.SummaryByDate();
                    break;
                // Summary of study log by Subject
                case 5:
                    stobj.SummaryBySubject();
                    break;
                // Exit the Application
                case 6 :
                    System.out.println("----------------------------------------------------");
                    System.out.println("----                    System.out.println(\"----Thanks For Using Marvellous StudyTracker--------\");\r\n" + //
                                                "Thanks For Using Marvellous StudyTracker--------");
                    System.out.println("----------------------------------------------------");


                default:

                    System.out.println("Please enter Valid Option");
                    break;
            }
        }while(iChoice != 6 );// End of do-while

    }// End of main

}// end of starter class