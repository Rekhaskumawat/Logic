import java.util.*;
import java.time.LocalDate;
import java.io.*;

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
class program895
{
    public static void main(String A[])
    {
        LocalDate lobj = LocalDate.now();

        StudyLog sobj = new StudyLog(lobj, "C_Programming", 4.2, "Advance pointer and Array");

        System.out.println(sobj);

    }
}