import java.util.*;

class Demo
{
    public void DisplayRangeRev(int iStart , int iEnd)
    {
        int iSum = 0;

        if(iStart > iEnd )
        {
            System.out.println("INvalid Range");
            return ;
        }
        else
        {
            for(int iCnt = iEnd ; iCnt >= iStart ; iCnt--)
            {
                System.out.println(iCnt);
               
            }
        }       
    }
}

class Assi10_5
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
       dobj.DisplayRangeRev(iValue1,iValue2);

    }
}