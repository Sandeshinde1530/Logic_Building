import java.util.*;


class Demo
{
    public int Fact(int iNo)
    {
        int iCnt = iNo;
        int iMult = 1;

        while(iCnt > 0)
        {
            iMult *= iCnt;
            iCnt--;
        }


        return iMult;  
    }
    



}

class Assi6_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iFact = 0;
        System.out.println("Enter the number :");
        iValue = sobj.nextInt();

        Demo dobj = new Demo();

        iFact = dobj.Fact(iValue);

        System.out.println("Factorial is : "+ iFact);

    }
}