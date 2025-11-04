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

        CharCount(str , cValue);


    }

    public static void CharCount(String A , char ch)
    {
        int iPos = 0;
        String Rev = "";    
                
        for( int  i = 0 ; i < A.length() ; i++)
        {
            Rev = A.charAt(i) + Rev;
        }
       System.out.println(Rev);
    }
}
