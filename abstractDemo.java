abstract class Demo
{
    public int A;
    public int B;

    public Demo()
    {
        System.out.println("Inside constructor");
        this.A = 0;
        this.B = 0;
    }

    abstract void fun();
    //virtual void fun()=0;  in c++

    void gun()
    {
        System.out.println("Inside gun");    
    }
}
class abstractDemo
{
    public static void main(String arg[])
    {
       // Demo obj = new Demo(); error
    }
}