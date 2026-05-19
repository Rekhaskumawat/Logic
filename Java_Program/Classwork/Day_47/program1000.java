class Demo
{
    public void Display(int iNo)
    {
        if(iNo == 0)
        {
            return ;
        }

        System.out.println(iNo);
        Display(iNo - 1);
        System.out.println(iNo);
    }
}

class program1000
{
    public static void main(String A[]) 
    {
        Demo dobj = new Demo();

        dobj.Display(5);

     
    }
}