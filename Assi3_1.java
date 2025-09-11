import java.util.*;

class Demo
{
    public int iNo;

    Demo(int A)
    {
        this.iNo = A;
    }

    void PrtEvn()
    {
        int iCnt = 0 , i = 1;

        if(this.iNo <= 0)
        {
            return;
        }
        else
        {
            iCnt = 1;
            while(iCnt <= this.iNo)
            {
                if(i % 2 ==0)
                {
                    System.out.print(i + "\t");
                    iCnt++;
                }
                i++;
            }
        }
    }
}


class Assi3_1
{
    public static void main(String a[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number:");
        iValue = sobj.nextInt();

        Demo dobj = new Demo(iValue);

        dobj.PrtEvn();

        
    }
}