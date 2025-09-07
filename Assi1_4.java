import java.util.*;

class Check
{
    public int iNo;
    
    Check(int A)
    {
        this.iNo = A;
    }
    public boolean Checkdivisible()
    {
        if(this.iNo % 5 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}



class Assi1_4
{
    public static void main(String a[])
    {
        int iValue = 0;
         boolean bRet= false;

        Scanner sobj = new Scanner(System.in);
            System.out.println("enter the number");
            iValue = sobj.nextInt();

            Check cobj = new Check(iValue);
          bRet = cobj.Checkdivisible();

            if(bRet == true)
            {
                System.out.println("It is divisible by 5");
            }
            else
            {
                System.out.println("It is not divisible by 5");
            }
    }
}