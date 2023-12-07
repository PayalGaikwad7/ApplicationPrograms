import Marvellous.Maths;
import Marvellous.Infosystems.Arithemetic;
 
class PackageDemo
{
    public static void main(String arg[])
    {
        Maths mobj = new Maths();
        int iRet=0;
        iRet=mobj.Addition(10,11);
        System.out.println("Addition is : "+iRet);
    }
}

//javac PackageDemo.java
//java PackageDemo