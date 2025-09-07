import java.util.*;

class Display
{
    public int iNo;

    Display(int A)
    {
        this.iNo = A;
    }

    void DisplayData()
    {
        for(int i= 0 ; i<this.iNo ; i++)
        {
            System.out.print("*\t");
        }
    }
}

class Assi1_5
{
    public static void main(String a[])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        iValue = sobj.nextInt();

        Display dobj = new Display(iValue);

        dobj.DisplayData();



    }
}