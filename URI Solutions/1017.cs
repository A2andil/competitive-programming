using System; 

class URI 
{
    static void Main(string[] args) 
    {
            int a, b;
            double x;

            a = Convert.ToInt16(Console.ReadLine());
            b = Convert.ToInt16(Console.ReadLine());
            x = (a * b) / 12.0;
            Console.WriteLine(x.ToString("0.000"));
    }
}
