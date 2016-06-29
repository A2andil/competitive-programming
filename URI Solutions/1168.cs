sing System; 

class URI {

    static void Main(string[] args) { 

        int[] arr = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
            int ans, n;
            string v;
            n = Convert.ToInt16(Console.ReadLine());

            for (int i = 0; i < n; i++)
            {
                v = Console.ReadLine();
                ans = 0;
                for (int j = 0; j < v.Length; j++)
                    ans += arr[v[j] - '0'];

                Console.WriteLine(ans + " leds");
            }

    }

}
