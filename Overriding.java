
class Base 
{
    public void fun()
    {
        System.out.println("Inside base fun");
    }
    public void gun()
    {
        System.out.println("Inside gun fun");
    }
    public void sun()
    {
        System.out.println("Inside sun fun");
    }
    public void run()
    {
        System.out.println("Inside base run");
    }
} 

class Derived extends Base {
    public void sun() {
        System.out.println("Inside Derived fun");
    }

    public void run(int A) {
        System.out.println("Inside Derived run with one parameter");
    }

    public void fun() {
        System.out.println("Inside Derived fun");
    }

    public void mun() {
        System.out.println("Inside Derivedmun fun");
    }
}

class Overriding {
    public static void main(String arg[]) {
        Base bobj = new Derived();
        //Base bobj = new Base();
        //Derived dobj = new Derived();
        //Derived d0bj = new Base();
        bobj.fun(); //Derived fun
        bobj.gun(); //Base gun
        bobj.sun(); //Derived sun
        bobj.run(); //Base run
        //bobj.run(11);
        //bobj.mun();
    }
}
