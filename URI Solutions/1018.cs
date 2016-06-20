using System; 

class URI 
{
    static void Main(string[] args) 
    { 
        int q, res;
            int[] arr = { 100, 50, 20, 10, 5, 2, 1 };

            res = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine(res);

            for (int i = 0; i < 7; i++)
            {
                q = res / arr[i];
                res %= arr[i];
                Console.WriteLine(q + " nota(s) de R$ " + arr[i] + ",00");
            }
    }
}
