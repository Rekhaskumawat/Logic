
class program594
{
    public static void main(String A[]) throws Exception
    {
        int i = 0;
        String str = "Marvellous InfoSystems Pune";

        System.out.println("Data :" +str);
        System.out.println("Length :"+str.length());

        for(i = str.length() ; i < 100 ;i++)
        {
            str = str + " ";
        }

        System.out.println("Data :" +str);
        System.out.println("Length :"+str.length());
    }
}

