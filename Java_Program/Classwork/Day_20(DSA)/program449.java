
// Doubly circular

class node
{
    public int data;
    public node next;
    public node prev ;
    
    public node(int no)
    {
        this.data = no; 
        this.next = null ;
        this.prev = null;
    }
}

class DoubleCL
{
    private node first;
    private node last ;
    private int iCount;

    public DoubleCL()
    {
        System.out.println("object of DoubleCL gets created");
        this.first =null;
        this.last = null;
        this.iCount = 0;
    }

    public void InsertFirst(int no)
    {}
    public void InsertLast(int no)
    {}
    public void InsertAtPos(int no , int pos)
    {}

    public void DeleteFirst()
    {}
    public void DeleteLast()
    {}
    public void DeleteAtPos(int pos)
    {}
    
    public void Display()
    {}
    public int Count()
    {
        return this.iCount;
    }

}

class program449
{
    public static void main(String Arr[])
    {
        DoubleCL obj =null;
        int iRet = 0 ;

        obj = new DoubleCL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of node are :"+iRet);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of node are :"+iRet);

        obj.DeleteFirst();
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of node are :"+iRet);

        obj.DeleteLast();
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of node are :"+iRet);

        obj.InsertAtPos(105, 3);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of node are :"+iRet);

        obj.DeleteAtPos(3);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of node are :"+iRet);

        obj = null;
        System.gc();
    }
}