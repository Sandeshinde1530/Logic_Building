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

    void Pattern()
    {
        for(int i = 0 ; i < iNo ; i++)
        {
            if( i % 2 != 0)
            {
                System.out.print(i+"\t");
            }
        }
    }
}

class Assi17_4
{
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number : \n");
        iValue = sobj.nextInt();

        Demo dobj = new Demo(iValue);

        dobj.Pattern();
        
    }
}