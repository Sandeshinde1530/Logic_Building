import java.util.*;
class Assi29_1
{
    public static void main(String a[])
    {
        String str = null ;
        char cValue = '\0';

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string :");
        str = sobj.nextLine();

        System.out.println("Enter the character to search : ");
        cValue = sobj.next().charAt(0);

        boolean bRet = CheckChar(str , cValue);

        if(bRet == false)
        {
            System.out.println("Absent");
        }
        else
        {
            System.out.println("Present");
        }

            }

    public static boolean CheckChar(String A , char ch)
    {
        boolean bFlag = false;
        for(int i = 0 ; i < A.length() ; i++)
        {
            if(A.charAt(i) == ch)
            {
                bFlag = true;
            }
        }

        return bFlag;
    }
}
