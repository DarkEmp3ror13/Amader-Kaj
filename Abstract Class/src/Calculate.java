abstract class Cal
{
    public abstract double addition(double x, double y);
}
class sub extends Cal
{
    public double addition (double x, double y)
    {
        return (x+y);
    }
    public double subtraction (double x, double y)
    {
        return (x-y);
    }

}


public class Calculate
{
    public static void main(String[] args)
    {

    sub obj = new sub();
    double i =obj.addition(6,8);
    double j = obj.subtraction(7,3);

        System.out.println(i);
        System.out.println(j);
    }

}
