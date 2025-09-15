import java.util.*;


    class Demo
    {
        public void Display(int iNo)
        {
            int iCnt = 0;

            if (iNo <  0)
            {
                iNo = -iNo;
            }

            int iStart = -iNo;

            for(iCnt = iStart ; iCnt <= iNo ; iCnt++)
            {
                System.out.print(iCnt + "\t");
            }

        }
    }
    
class Assi5_3
{

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter thr number:");
        int iValue = sobj.nextInt();

        Demo dobj = new Demo();

        dobj.Display(iValue);


    }
}