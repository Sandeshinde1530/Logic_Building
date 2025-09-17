import java.util.*;


class Demo
{
    public void number(int iNo)
    {
        if(iNo <=50)
        {
            System.out.println("Small");
        }
        else if(iNo > 50 && iNo <100)
        {
            System.out.println("Medium");
        }
        else
        {
            System.out.println("Large");
        }
    }
    



}

class Assi6_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        System.out.println("Enter the number :");
        iValue = sobj.nextInt();

        Demo dobj = new Demo();

        dobj.number(iValue);

    }
}