import java.util.*;


class Demo
{
    public void Table(int iNo)
    {
        int iCnt = 1;

        for(iCnt = 1;  iCnt <= 10 ; iCnt++)
        {
            System.out.println(iCnt * iNo);
        }          
    }
}

class Assi6_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number :");
        iValue = sobj.nextInt();

        Demo dobj = new Demo();
        dobj.Table(iValue);
    }
}