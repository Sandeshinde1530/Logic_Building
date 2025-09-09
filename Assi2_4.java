import java.util.*;

class Demo
{
    public int iNo;

    Demo(int A)
    {
        this.iNo = A;
    }

    public void Display(int iFreq)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <=iFreq;iCnt++)
        {
            System.out.println(iNo);
        }
       
    }

}

class Assi2_4
{
    public static void main( String A[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter two numbers");
        int iValue1 = sobj.nextInt();
        int iValue2 = sobj.nextInt();


        Demo dobj = new Demo(iValue1);

        dobj.Display(iValue2);
    }
}