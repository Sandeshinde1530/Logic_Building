import java.util.*;

class Demo
{
    public void DisplayRange(int iStart , int iEnd)
    {
        if(iStart > iEnd)
        {
            System.out.println("INvalid Range");
        }
        else
        {
            for(int iCnt = iStart ; iCnt <= iEnd ; iCnt++)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class Assi10_1
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
        dobj.DisplayRange(iValue1,iValue2);

    }
}