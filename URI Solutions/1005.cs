using System; 

class URI 
{
      static void Main(string[] args) 
      { 
            double x, y;
            x = Convert.ToDouble(Console.ReadLine());
            y = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("MEDIA = " + ((x * 3.5 + y * 7.5) / (3.5 + 7.5)).ToString("0.00000"));
    }

}
