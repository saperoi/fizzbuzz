using System;
using System.Threading;
using System.Threading.Tasks;
class MainClass {
  public static void Main (string[] args) {
    int i = 1;
    while (i <= 100) {
      string result = "";
      if (i%3==0){result+="Fizz";}
      if (i%5==0){result+="Buzz";}
      if (result==""){Console.WriteLine(i);} else {Console.WriteLine(result);}
      i++;
      Thread.Sleep(1000);
    }
  }
}
