import java.util.*;

class Demo
{
    public int MultDigit(int iNo)
    {
        int iDigit = 0 , iSumEvn = 0 , iSumOdd = 0 ,iDiff = 0 ;

        if(iNo < 0 )
        {
            iNo = -iNo;
        }

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                iSumEvn += iDigit;
            }
            else
            {
                iSumOdd += iDigit;
            }
            iNo = iNo / 10;            
        }

    iDiff = iSumEvn - iSumOdd;
        return iDiff;
    }
}

class Assi12_5
{
    public static void main(String D[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iRet = 0;

        System.out.println("Enter the number :");
        iValue1 = sobj.nextInt();
        

        Demo dobj = new Demo();
        iRet = dobj.MultDigit(iValue1);

        System.out.println(iRet);
       
       }
}