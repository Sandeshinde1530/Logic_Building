import java.util.*;

class Demo
{
        int MultFact(int iNo)
    {
        int iMult = 1;
        int iCnt = 0;

        for(iCnt = 1 ; iCnt <= iNo/2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iMult *= iCnt;
            }
        }
        return iMult;   
    }

}

class Assi4_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0, iValue = 0;

       System.out.println("Enter the number:");
        iValue =  sobj.nextInt();

        Demo dobj = new Demo();
        iRet = dobj.MultFact(iValue);

        System.out.println(iRet);


    }
}