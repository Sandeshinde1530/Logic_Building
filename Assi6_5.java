import java.util.*;

//10
class Demo
{
    public void TableRev(int iNo)
    {
        int iCnt = 1;

        for(iCnt = 10;  iCnt >= 1 ; iCnt--)
        {
            System.out.println(iCnt * iNo);
        }          
    }
}

class Assi6_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number :");
        iValue = sobj.nextInt();

        Demo dobj = new Demo();
        dobj.TableRev(iValue);
    }
}