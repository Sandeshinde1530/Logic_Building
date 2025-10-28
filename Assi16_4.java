import java.util.*;

class Demo
{
     public void Display(int A[] , int iLength)
     {      
        
        int iCnt = 0;
        int iCount = 0;

        for(iCnt = 0 ; iCnt <iLength ; iCnt++)
        {
           if(A[iCnt] <= 999 && A[iCnt] >= 100)
           {
            System.out.println(A[iCnt]);
           }
        }
 
     }
}

class Assi16_4
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
        dobj.Display(Arr, iSize);      

    }
    
}