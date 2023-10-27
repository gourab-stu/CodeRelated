public class preeti1
{
    private char name;
    preeti1()
    {
        System.out.println("Constructor");
        name='A';
    }
    public static void main(String args[])
    {
        preeti1 obj=new preeti1();
        System.out.println("name is "+obj.name);
    }
}