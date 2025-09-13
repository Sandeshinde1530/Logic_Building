import java.util.*;

class Demo
{
    public char cAlpha;

    Demo(char A)
    {
        this.cAlpha = A;
    }

   void ChkVowel()
    {
       char  Char = this.cAlpha;

        if(Char == 'a' ||Char == 'e'||Char == 'i'||Char == 'o'||Char == 'u'||Char == 'A'||Char == 'E'||Char == 'I'||Char == 'O'||Char == 'U')
        {
            System.out.println("It is a vowel");
        }
        else
        {
            System.out.println("It is not a vowel");
        }
    }

}

class Assi3_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        char cValue = '\0';

       System.out.println("Enter the character:");
        cValue =  sobj.next().charAt(0);

        Demo dobj = new Demo(cValue);
        dobj.ChkVowel();


    }
}