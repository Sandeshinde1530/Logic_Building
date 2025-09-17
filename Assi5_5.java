import java.util.*;


    class Demo
    {
        public void DisplayMult(int iNo)
        {
            int iCnt = 0;

            if (iNo <  0)
            {
                iNo = -iNo;
            }

            for(iCnt = 1 ; iCnt <= 5 ; iCnt++)
            {
                  System.out.println(iCnt * iNo);  
                
            }

        }
    }
    
class Assi5_5
{

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter thr number:");
        int iValue = sobj.nextInt();

        Demo dobj = new Demo();

        dobj.DisplayMult(iValue);


    }
}