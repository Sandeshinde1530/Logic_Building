import java.util.*;

class Demo
{
    public int DisplayRangeSum(int iStart , int iEnd)
    {
        int iSum = 0;

        if(iStart > iEnd || iStart < 0 || iEnd < 0)
        {
            System.out.println("INvalid Range");
            return ;
        }
        else
        {
            for(int iCnt = iStart ; iCnt <= iEnd ; iCnt++)
            {
                iSum += iCnt;
            }
        }

        return iSum;
    }
}

class Assi10_3
{
    public static void main(String D[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;
        int iRet = 0;

        System.out.println("Enter the range :");
        iValue1 = sobj.nextInt();
        iValue2 = sobj.nextInt();

        Demo dobj = new Demo();
        iRet = dobj.DisplayRangeSum(iValue1,iValue2);

        System.out.println(iRet);

    }
}