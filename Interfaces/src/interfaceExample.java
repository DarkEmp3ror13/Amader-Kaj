
interface WaterBottle
{
    String color = "Blue";

    void fillUp();

}


public class interfaceExample implements WaterBottle
{
    public static void main(String[] args)
    {
        System.out.println(color);

        interfaceExample ex = new interfaceExample();
        ex.fillUp();
    }
    @Override
    public void fillUp()
    {
        System.out.println("It is filled..");
    }

}
