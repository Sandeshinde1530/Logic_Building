import java.util.*;

class Demo
{
    public int iNo;

    Demo(int A)
    {
        this.iNo = A;
    }

    public void Display()
    {
        while(iNo>0)
        {
            System.out.print("*\t");
            iNo--;
        }
    }

}

class Assi2_2
{
    public static void main( String A[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number");
        int iValue = sobj.nextInt();


        Demo dobj = new Demo(iValue);

        dobj.Display();
    }
}