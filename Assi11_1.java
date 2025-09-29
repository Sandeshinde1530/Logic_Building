import java.util.*;

class Demo
{
    public void DisplayDigit(int iNo)
    {
        int iDigit = 0;

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            System.out.println(iDigit);
        }
    }
}

class Assi11_1
{
    public static void main(String D[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;

        System.out.println("Enter the number :");
        iValue1 = sobj.nextInt();
        

        Demo dobj = new Demo();
       dobj.DisplayDigit(iValue1);

    }
}