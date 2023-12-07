class Demo extends Thread
{
    public void run() //running state
    {
        for  (int i = 1;  i < 10; i++) 
        {
            try
            {
                System.out.println("Value of i is : "+i);
                Thread.sleep(500);
            }
            catch(Exception obj)
            {}
        }
        System.out.println("End of thread");
    }
} 

class Multi5 
{
    public static void main(String Arg[]) throws Exception
    {
        System.out.println("Current thread is : " + Thread.currentThread().getName());

        Demo obj1 = new Demo(); //New State
        obj1.start(); //Runnable
        obj1.join();
        System.out.println("End of main thread");
    }
}
