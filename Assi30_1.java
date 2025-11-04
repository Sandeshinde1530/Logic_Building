import java.util.*;
class Assi30_1
{
    public static void main(String a[])
    {
        
        char cValue = '\0';

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the character :");
        cValue = sobj.next().charAt(0);      

        CheckAlpha(cValue);


    }

    public static void CheckAlpha( char ch)
    {
        boolean bFlag = false;

        if(ch >= 65 && ch <= 90 || ch>= 97 && ch<=122)
        {
            bFlag = true;
        }
        System.out.println(bFlag);
    }
}
