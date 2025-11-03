import java.util.*;
class Assi29_2
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

        int  iRet = CharCount(str , cValue);

            System.out.println(iRet);

    }

    public static int CharCount(String A , char ch)
    {
        int i = 0;
        
        for( i = 0 ; i < A.length() ; i++)
        {
            if(A.charAt(i) == ch)
            {
                
            }
        }
        return i+1;
    }
}
