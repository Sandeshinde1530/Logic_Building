import java.util.*;

class Demo
{
    public int iNo;

    Demo(int A)
    {
        this.iNo = A;
    }

   public boolean ChkEven()
    {
        if(iNo % 2 ==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


}

class Assi2_5
{
    public static void main( String A[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the numbers");
        int iValue1 = sobj.nextInt();
    

        Demo dobj = new Demo(iValue1);

        boolean bRet = dobj.ChkEven();

         if(bRet == true)
        {
            System.out.println("It is EVEN");
        }
        else
        {
            System.out.println("It is ODD");
        }

    }
}