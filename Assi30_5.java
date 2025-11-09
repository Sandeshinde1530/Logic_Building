import java.util.*;
class Assi30_5
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
            switch(ch)
            {
                case 'A':
                    System.out.println(" 7 Am");
                    break;
                case 'B':
                    System.out.println(" 8 Am");
                    break;
                case 'C':
                    System.out.println(" 9 Am");
                    break;
                case 'D':
                    System.out.println(" 10 Am");
                    break;
                default:
                    System.out.println("Error");
            }
    }
}
