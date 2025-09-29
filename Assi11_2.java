import java.util.*;

class Demo
{
    public boolean DisplayDigit(int iNo)
    {
        int iDigit = 0;

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            if(iDigit == 0)
            {
                return true;
            }
            iNo = iNo / 10;            
        }

        return false;
    }
}

class Assi11_2
{
    public static void main(String D[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        boolean bRet = false;

        System.out.println("Enter the number :");
        iValue1 = sobj.nextInt();
        

        Demo dobj = new Demo();
        bRet = dobj.DisplayDigit(iValue1);

        if(bRet == false)
        {
            System.out.println("dont have zero");
        }
        else
        {
            System.out.println("it contains zero");
        }

    }
}