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
       if(this.iNo < 10)
       {
        System.out.println("Hello");
       }
       else
       {
        System.out.println("Demo");
       }
    }

}

class Assi2_3
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