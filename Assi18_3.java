import java.util.*;

class Demo
{
    public int iNo;

    Demo(int A)
    {
        if(A < 0)
        {
            A = -A;
        }
        iNo = A;
    }

    int  EvnFactMult()
    {
        int iMult = 1;
        for(int i = iNo ; i > 0 ; i--)
        {
             if(i % 2 ==0)
             {
                iMult *= i;
             }
        }
       return iMult;
    }
}

class Assi18_3
{
    public static void main(String A[])
    {
        int iValue = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number : \n");
        iValue = sobj.nextInt();

        Demo dobj = new Demo(iValue);

        iRet = dobj.EvnFactMult();

        System.out.println(iRet);
        
    }
}