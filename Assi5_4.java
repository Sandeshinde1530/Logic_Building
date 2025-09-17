import java.util.*;


    class Demo
    {
        public void DisplayOdd(int iNo)
        {
            int iCnt = 0;

            if (iNo <  0)
            {
                iNo = -iNo;
            }

            for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
            {
                if(iCnt % 2 != 0 )
                {
                  System.out.print(iCnt + "\t");  
                }
                
            }

        }
    }
    
class Assi5_4
{

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter thr number:");
        int iValue = sobj.nextInt();

        Demo dobj = new Demo();

        dobj.DisplayOdd(iValue);


    }
}