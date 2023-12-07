class Marvellous
{
    public int i;
    public int j;

    public Marvellous()
    {
        System.out.println("Inside default constructor");
    }

    public Marvellous(int a,int b)
    {
        System.out.println("Inside parametrised constructur");
    }

    public void Fun()
    {
        System.out.println("Inside fun method");
    }
}
class ClassDemo
{
    public static void main(String arg[])
    {
        System.out.println("Inside main");

        Marvellous mobj1 = new Marvellous();
        //Marvellous mobj2 = new Marvellous(11, 21);

        System.out.println(mobj1);

    }
}