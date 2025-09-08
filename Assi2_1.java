import java.util.*;

class Demo
{
    public int iNo;

    Demo(int A)
    {
        this.iNo = A;
    }

    public void Check()
    {
        int iCnt = 0;
        iCnt = 1;
        while(iCnt <= this.iNo)
        {
            System.out.print("*\t");
            iCnt++;
        }
    }

}

class Assi2_1
{
    public static void main( String A[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number");
        int iValue = sobj.nextInt();


        Demo dobj = new Demo(iValue);

        dobj.Check();
    }
}