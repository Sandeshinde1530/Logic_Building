import java.util.*;

class Demo
{
    int SumNonFact(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt = 1 ;iCnt <= iNo ; iCnt++)
        {
            if(iNo % iCnt != 0)
            {
                iSum += iCnt;           
            }
        } 
        return iSum;   
    }

}

class Assi4_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        int  iValue = 0;
        int iRet = 0;
        
        System.out.println("Enter the number:");
        iValue =  sobj.nextInt();

        Demo dobj = new Demo();
        iRet = dobj.SumNonFact(iValue);

        System.out.println(iRet);

    }
}