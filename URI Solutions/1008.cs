using System; 

class URI {

    static void Main(string[] args) { 

        int num, hour;
            double per_hour, salary;

            num = Convert.ToInt16(Console.ReadLine());
            hour = Convert.ToInt16(Console.ReadLine());
            per_hour = Convert.ToDouble(Console.ReadLine());

            salary = hour * per_hour;
            Console.WriteLine("NUMBER = " + num + "\nSALARY = U$ " + salary.ToString("0.00"));
    }

}
