using System;

class URI
{
    static void Main(string[] args)
    {
        int t, h, m, s;
        t = Convert.ToInt32(Console.ReadLine());

        h = t / 3600;
        m = (t - h * 3600) / 60;
        s = t - (h * 3600 + m * 60);

        Console.WriteLine(h + ":" + m + ":" + s);
    }
}
