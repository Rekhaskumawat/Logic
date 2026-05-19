class Demo
{
    public int Factorial(int iNo)
    {
        if(iNo == 0)
        {
            return 1;
        }

        return iNo*Factorial(iNo - 1);
    }
}

class program998
{
    public static void main(String A[]) 
    {
        Demo dobj = new Demo();

        int iRet = 0;

        iRet = dobj.Factorial(5);

        System.out.println("Factoria is : "+ iRet);
    }
}