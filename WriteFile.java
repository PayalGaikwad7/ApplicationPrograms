import java.io.*;

class WriteFile
{
    public static void main(String arg[])
    {
        try
        {
            String data = "<Marvellous Infosystems>";
            byte Arr[] = data.getBytes();

            FileOutputStream fobj = new FileOutputStream("PPA.txt");
            fobj.write(Arr);
            fobj.close();
        }
        catch(Exception obj)
        {

        } 
    }
    
}