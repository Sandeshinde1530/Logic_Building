import java.util.*;

class Demo
{
    public char cAlpha;

    Demo(char A)
    {
        this.cAlpha = A;
    }

    void DisplayConvert()
    {
        char c = '\0';
        if(this.cAlpha >= 65 && this.cAlpha <=90)
        {
            c= (char) (this.cAlpha + 32);
            System.out.println(c);
        } 
        else if(this.cAlpha >= 97 && this.cAlpha <=122)
        {
            c= (char) (this.cAlpha - 32);
            System.out.println(c);
        }      
            
    }   
}


class Assi3_4
{
    public static void main(String a[])
    {
        char cValue = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Alphatbet:");
        cValue = sobj.next().charAt(0);

        Demo dobj = new Demo(cValue);

        dobj.DisplayConvert();

        
    }
}