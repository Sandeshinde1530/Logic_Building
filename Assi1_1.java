


public class Assi1_1
{
    public static void main(String []args )
    {
        System.out.println("My 1st java program");

        Divide dobj = new Divide(25 , 5);

        int iRet = dobj.solve();

        System.out.println("Division is "+iRet);


    }

}
class Divide
{
    public int iNo1 ;
    public int iNo2 ;

    public Divide(int A , int B)
    {
        this.iNo1 = A;
        this.iNo2 = B;
    }

    public int solve()
    {
        int iAns = 0;

        if (this.iNo1 < this.iNo2)
        {
            return - 1;
        }
        else
        {
            iAns = this.iNo1 / this.iNo2;
        }
        return iAns;
    }
}