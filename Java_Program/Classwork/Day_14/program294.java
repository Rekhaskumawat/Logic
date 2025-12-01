import java.util.*;

class program294
{
       public static void main(String A[])
    {
        int Arr[]= {45,21,90,54,78};

        for(int No : Arr)
        {
            System.out.println(No);
        }

        int index = Arrays.binarySearch(Arr, 90);

        System.out.println("Element found at index :"+index);

    }
}