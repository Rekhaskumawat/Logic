
import java.util.*;

class StudentX
{
    public String Name;
    public int Marks;

    public StudentX(String a , int b)
    {
        this.Name = a;
        this.Marks = b;
    }

    public void display()
    {
        System.out.println(Name + " : "+Marks);
    }
}
class program885
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        ArrayList <Integer> aobj = new ArrayList<Integer>();

        StudentX s1 = new StudentX("Sagar", 90);
        StudentX s2 = new StudentX("Rahul", 80);
        StudentX s3 = new StudentX("Pooja", 92);
        StudentX s4 = new StudentX("amit", 72);

        System.out.println(s1);
        System.out.println(s2);

        s1.display();
        s2.display();

    }
}