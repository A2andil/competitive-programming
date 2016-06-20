using System;

class URI
{
    static void Main(string[] args)
    {
            double pi = 3.14159, a, b, c;
            string input;

            input = Console.ReadLine();
            a = Convert.ToDouble(input.Split(' ')[0]);
            b = Convert.ToDouble(input.Split(' ')[1]);
            c = Convert.ToDouble(input.Split(' ')[2]);

            Console.WriteLine("TRIANGULO: " + (0.5 * a * c).ToString("0.000"));
            Console.WriteLine("CIRCULO: " + (pi * c * c).ToString("0.000"));
            Console.WriteLine("TRAPEZIO: " + ((a + b) / 2 * c).ToString("0.000"));
            Console.WriteLine("QUADRADO: " + (b * b).ToString("0.000"));
            Console.WriteLine("RETANGULO: " + (a * b).ToString("0.000"));
    }


}
