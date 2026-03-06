/*
    Description : program  to check the number is strong number or not 
                EX :- 145 (1! +4! + 5! == 145)

                step 3 : complete program with opimization
*/

import java.util.Scanner;

class program819
{

    public static boolean ChkStrong(int iNo)
    {
        int iFact = 0 ,iCnt = 0 , iTemp = 0,iSum = 0 , iDigit = 0;
        iTemp = iNo;

        //              0 1 2 3 4   5   6   7     8      9
        int factArr[] ={1,1,2,6,24,120,720,5040,40320 ,362880 };

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            iNo = iNo / 10;

            iSum = iSum+ factArr[iDigit];
        
        }

        return (iSum == iTemp) ;
    
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        boolean bRet =false;

        System.out.println("Enter a Number: ");
        iNo = sobj.nextInt();

        bRet = ChkStrong(iNo);

        if(bRet)
        {
            System.out.println(iNo + " is a Strong Number ");
        }
        else
        {
            System.out.println(iNo + " is not a Strong Number ");
        }

        sobj.close();
    }
}