
class A
{
    public void display()
    {
        System.out.print("DARK ");
    }
}
interface B
{
     void display();

}
interface C
{
   void display();

}
class D extends A implements B,C
{
    public void display()
    {
        super.display();
        System.out.print("EMP3ROR ");
    }

}

public class HybridInheritence
{
    public static void main(String[] args)
    {
        D ob= new D();
        ob.display();
    }

}
