using System; 

class URI {

    static void Main(string[] args) 
    { 
            long a, b, c;
            string input;
            while (true)
            {
                input = Console.ReadLine();
                a = Convert.ToInt32(input.Split(' ')[0]);
                b = Convert.ToInt32(input.Split(' ')[1]);

                if (a == 0 && b == 0)
                    break;

                c = 2 * a - b;
                Console.WriteLine(c);
            }
        }
    }
}
