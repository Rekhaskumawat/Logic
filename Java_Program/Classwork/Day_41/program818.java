/*
    Description : program  to check the number is strong number or not 
                EX :- 145 (1! +4! + 5! == 145)

                step 3 : complete program seperate function
*/

import java.util.Scanner;

class program818
{

    public static boolean ChkStrong(int iNo)
    {
        int iFact = 0 ,iCnt = 0 , iTemp = 0,iSum = 0 , iDigit = 0;
        iTemp = iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            for(iCnt = 1 , iFact = 1; iCnt <= iDigit ; iCnt++)
            {
                iFact = iFact*iCnt;
            }
            
            iNo = iNo / 10;

            iSum = iSum+iFact;
        
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