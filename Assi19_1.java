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

    public void  Pattern()
    {
        char A = 'A';
        
        for(int  i = 1 ; i <= iNo  ; i++ , A++)
        {
           System.out.print(A+"\t");
        }
    }
}

class Assi19_1
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