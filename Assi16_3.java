import java.util.*;

class Demo
{
     public int Diff(int A[] , int iLength)
     {
        int iMin = A[1];
        int iMax = A[1];
        int iDiff = 0;
        int iCnt = 0;

        for(iCnt = 0 ; iCnt <iLength ; iCnt++)
        {
            if(A[iCnt] < iMin)
            {
                iMin = A[iCnt];
            }
            else if(A[iCnt] > iMax)
            {
                iMax = A[iCnt];
            }
        }
        iDiff = iMax - iMin;
        return iDiff;

     }
}

class Assi16_3
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

        iRet  = dobj.Diff(Arr, iSize);
        System.out.println(iRet);

    }
    
}