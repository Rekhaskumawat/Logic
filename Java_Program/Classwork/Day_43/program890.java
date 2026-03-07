
import java.util.*;

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
class program890
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        ArrayList <StudentX> aobj = new ArrayList<StudentX>();

        StudentX s1 = new StudentX("Sagar", 90);
        StudentX s2 = new StudentX("Rahul", 80);
        StudentX s3 = new StudentX("Pooja", 92);
        StudentX s4 = new StudentX("amit", 72);

        aobj.add(s1);
        aobj.add(s2);
        aobj.add(s3);
        aobj.add(s4);

        int iMax = 0;
        StudentX temp = null;

        for(StudentX s : aobj)
        {
            if(s.getMarks() > iMax)
            {
                iMax = s.getMarks();
                temp = s;
            }
        }

        System.out.println("Higest student details :" +temp);
        aobj.clear();

        
    }
}