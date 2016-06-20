using System; 
class URI 
{
  static void Main(string[] args) 
  { 
    string input; 
    double x1, x2, y1, y2, dist;
    
    //insert x1 , y1 
    input = Console.ReadLine(); 
    x1 = Convert.ToDouble(input.Split(' ')[0]); 
    y1 = Convert.ToDouble(input.Split(' ')[1]); 
    
    //insert x2 , y2  
    input = Console.ReadLine(); 
    x2 = Convert.ToDouble(input.Split(' ')[0]); 
    y2 = Convert.ToDouble(input.Split(' ')[1]); 
    dist = Math.Sqrt(Math.Pow(x2 - x1, 2) + Math.Pow(y2 - y1, 2)); 
    Console.WriteLine(dist.ToString("0.0000")); 
  } 
}
