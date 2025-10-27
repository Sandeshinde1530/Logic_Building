import java.util.*;

class Demo
{
     public void DigitSum(int A[] , int iLength)
     {      
        
        int iCnt = 0;
        int iCount = 0;
        int iNo = 0;
        int iDigitSum = 0;

        System.out.println("Digit addtion:");   

        for(iCnt = 0 ; iCnt <iLength ; iCnt++)
        {
            iNo = A[iCnt];
            iDigitSum = 0;
            while(iNo > 0)
            {
                iDigitSum += iNo% 10;
                iNo = iNo /10;
            }
            System.out.print(iDigitSum+"\t");           
        } 
     }
}

class Assi16_5
{
    public static void main(String Arg[])
    {
        int iSize = 0;
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("How many integers : \n");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];
        System.out.println("Enter "+iSize+" elements :");

        for(int i = 0;i < iSize ; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        Demo dobj = new Demo();
        dobj.DigitSum(Arr, iSize);      

    }

    sandesh sangram shinde

    System.out.println 