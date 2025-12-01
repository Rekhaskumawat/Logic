import java.util.*;

class program293
{
       public static void main(String A[])
    {
        int Arr[]= {45,21,90,54,78};

       
        for(int No : Arr)
        {
            System.out.println(No);
        }

        Arrays.sort(Arr);   // inbuilt function for sorting
        System.out.println("Array after sorting :");

        for(int No : Arr)
        {
            System.out.println(No);
        }

    }
}