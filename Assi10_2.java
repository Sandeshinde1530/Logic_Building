import java.util.*;

class Demo
{
    public void DisplayEvnRange(int iStart , int iEnd)
    {
        if(iStart > iEnd)
        {
            System.out.println("INvalid Range");
        }
        else
        {
            for(int iCnt = iStart ; iCnt <= iEnd ; iCnt++)
            {
                if(iCnt % 2 ==0)
                {
                System.out.print(iCnt);
                }
            }
        }
    }
}

class Assi10_2
{
    public static void main(String D[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;

        System.out.println("Enter the range :");
        iValue1 = sobj.nextInt();
        iValue2 = sobj.nextInt();

        Demo dobj = new Demo();
        dobj.DisplayEvnRange(iValue1,iValue2);

    }
}