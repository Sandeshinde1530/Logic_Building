import java.util.*;


class Demo
{
    public void number(int iNo)
    {
       switch(iNo)       {
        case 1 :
            System.out.println("One");
            break;

        case 2:
            System.out.println("two");
            break;
        case 3 :
            System.out.println("three");
            break;

        case 4:
            System.out.println("four");
            break;
        case 5 :
            System.out.println("Five");
            break;

        case 6:
            System.out.println("Six");
            break;
        case 7 :
            System.out.println("Seven");
            break;

        case 8:
            System.out.println("Eight");
            break;
        case 9 :
            System.out.println("Nine");
            break;

        case 10:
            System.out.println("ten");
            break;
        default:
            System.out.println("Invalid number");
       }
        
  
    }
    



}

class Assi6_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        System.out.println("Enter the number :");
        iValue = sobj.nextInt();

        Demo dobj = new Demo();

        dobj.number(iValue);

    }
}