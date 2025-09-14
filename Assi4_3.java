import java.util.*;

class Demo
{
     void FactRev(int iNo)
    {
        int iCnt = 0;

        for(iCnt = iNo/2; iCnt >= 1 ; iCnt--)
        {
            if(iNo % iCnt == 0)
            {
                System.out.print(iCnt + "\t");                
            }
        }        
    }
}

class Assi4_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        int  iValue = 0;
        
        System.out.println("Enter the number:");
        iValue =  sobj.nextInt();

        Demo dobj = new Demo();
        dobj.FactRev(iValue);

    }
}