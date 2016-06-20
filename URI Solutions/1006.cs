using System; 

class URI {

    static void Main(string[] args) { 

       double a,b,c;
            a = Convert.ToDouble(Console.ReadLine());
            b = Convert.ToDouble(Console.ReadLine());
            c = Convert.ToDouble(Console.ReadLine());


            Console.WriteLine("MEDIA = " + ((a * 2 +b * 3 + c*5) / (2+3+5)).ToString("0.0"));
            
    }

}
