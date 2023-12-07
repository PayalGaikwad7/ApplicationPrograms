class Multi3
{
    public static void main(String Arg[])
    {
        System.out.println("Current thread is : "+Thread.currentThread().getName());
        
        Demo obj1 = new Demo(); //New State
        Demo obj2 = new Demo(); //New State
         
        obj1.setName("First_Thread");
        obj2.setName("Second_Thread");

        obj1.start();         //Runnable
        obj2.start();         //Runnable

        //System.out.println("Thread goes to dead state");   dead state
    }  
}
class Demo extends Thread
{
    public void run() //running state
    { 
        String name = Thread.currentThread().getName();
        System.out.println("Current thread is : "+name);
        for(int i=1; i<100; i++)
        {
                System.out.println("Name of thread is : "+name+" with counter "+i);
        }
    }
}