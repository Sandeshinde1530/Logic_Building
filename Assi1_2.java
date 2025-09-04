


public class Assi1_2
{
    public static void main(String []args )
    {
        Display dobj = new Display();

        dobj.DisplayData();
    }

}
class Display
{
    public String Name = "Marvellous";
    public void DisplayData()
    {
        int i = 0;
        for (i = 0; i< 5 ;i++)
        {
            System.out.println(i+1 + ". "+this.Name);
        }
    }
}