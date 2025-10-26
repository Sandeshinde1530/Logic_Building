import java.util.*;

class Demo
{
     public int Min(int A[] , int iLength)
     {
        int iMin = A[1];
        int iCnt = 0;

        for(iCnt = 0 ; iCnt <iLength ; iCnt++)
        {
            if(A[iCnt] < iMin)
            {
                iMin = A[iCnt];
            }
        }
        return iMin;

     }
}

class Assi16_2
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

        iRet  = dobj.Min(Arr, iSize);
        System.out.println(iRet);

    }
    
}