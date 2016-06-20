using System;


class URI
{


    static void Main(string[] args)
    {
        int t, y, m, d;
        t = Convert.ToInt32(Console.ReadLine());

        y = t / 365;
        m = (t - y * 365) / 30;
        d = t - (y * 365 + m * 30);

        Console.WriteLine(y + " ano(s)\n" + m + " mes(es)\n" + d+" dia(s)");
    }
}
