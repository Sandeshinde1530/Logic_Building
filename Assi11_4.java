import java.util.*;

class Demo
{
    public int CountFour(int iNo)
    {
        int iDigit = 0 , iCount = 0;

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            if(iDigit == 4)
            {
               iCount++;
            }
            iNo = iNo / 10;            
        }

        return iCount;
    }
}

class Assi11_4
{
    public static void main(String D[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iRet = 0;

        System.out.println("Enter the number :");
        iValue1 = sobj.nextInt();
        

        Demo dobj = new Demo();
        iRet = dobj.CountFour(iValue1);

        System.out.println(iRet);
       
       }
}