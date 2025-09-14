import java.util.*;

class Demo
{
    int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0, iSumNonFact = 0;
    int iDiff = 0;


    for(iCnt = 1 ;iCnt <iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact += iCnt;       
        }
        else
        {
            iSumNonFact += iCnt;
        }
    } 

    iDiff = iSumNonFact - iSumFact;

    return iDiff;   
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
        iRet = dobj.FactDiff(iValue);

        System.out.println(iRet);

    }
}