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
        for(int i = 1 ; i <=5 ; i++)
        {
            System.out.print(i*iNo+"\t");  
        }
    }
}

class Assi17_5
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