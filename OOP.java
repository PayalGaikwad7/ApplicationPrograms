import java.util.*;

class Arithmetic
{
    public int Value1;
    public int Value2;

    //Arithmetic aobj = new Arithmetic(No1,No2);
    //Arithmetic aobj = new Arithmetic(15,7);


    public Arithmetic(int A,int B)
    {
        this.Value1=A;
        this.Value2=B;
    }

    public int Addition()
    {
        int Result=0;
        Result=this.Value1+this.Value2;
        return Result;
    }

    public int Subtraction()
    {
        int Result=0;
        Result=this.Value1-this.Value2;
        return Result;
    }
}

class OOP
{
    public static void main(String arg[])
    {
        int No1=0, No2=0, Ans=0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number: ");
        No1=sobj.nextInt();
        System.out.println("Enter second number: ");
        No2=sobj.nextInt();

        Arithmetic aobj = new Arithmetic(No1,No2);

        Ans = aobj.Addition();
        System.out.println("Addition is : "+Ans);

        Ans = aobj.Subtraction();
        System.out.println("Subtraction is : "+Ans);

        sobj.close();


    }

}