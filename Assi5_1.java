import java.util.*;


    class Demo
    {
        public void Pattern(int iNo)
        {
            int iCnt = 0;

            if (iNo <  0)
            {
                iNo = -iNo;
            }

            for(iCnt = 0 ; iCnt < iNo ; iCnt++)
            {
                System.out.print("$\t*\t");
            }

        }
    }
    
class Assi5_1
{

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter thr number:");
        int iValue = sobj.nextInt();

        Demo dobj = new Demo();

        dobj.Pattern(iValue);


    }
}