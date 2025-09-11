import java.util.*;

class Demo
{
    public int iNo;

    Demo(int A)
    {
        this.iNo = A;
    }

    void DisplayFactor()
    {
        int iCnt = 0 , i = 1;

        if(this.iNo <= 0)
        {
            this.iNo = -(this.iNo);
        }
       for(i = 1 ; i<= this.iNo / 2 ;i++)
       {
        if((this.iNo % i == 0) && (i%2==0))
        {
            System.out.print(i+"\t");
        }
       }
    }
}


class Assi3_2
{
    public static void main(String a[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number:");
        iValue = sobj.nextInt();

        Demo dobj = new Demo(iValue);

        dobj.DisplayFactor();

        
    }
}