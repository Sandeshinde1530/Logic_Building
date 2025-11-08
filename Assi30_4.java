import java.util.*;
class Assi30_4
{
    public static void main(String a[])
    {
        
        char cValue = '\0';

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the character :");
        cValue = sobj.next().charAt(0);      

        CheckCap(cValue);


    }

    public static void CheckCap( char ch)
    {
        boolean bFlag = false;

        if(ch >= 97 && ch <= 122 )
        {
            bFlag = true;
        }
        System.out.println(bFlag);
    }
}
