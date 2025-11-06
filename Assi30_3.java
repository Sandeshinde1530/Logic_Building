import java.util.*;
class Assi30_3
{
    public static void main(String a[])
    {
        
        char cValue = '\0';

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the character :");
        cValue = sobj.next().charAt(0);      

        CheckDigit(cValue);


    }

    public static void CheckDigit( char ch)
    {
        boolean bFlag = false;

        if(ch >= 48 && ch <= 57 )
        {
            bFlag = true;
        }
        System.out.println(bFlag);
    }
}
