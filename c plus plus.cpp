#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

int main()
{
    int i = 1;
    while(i<=15){
      string result = "";
      if(i%3==0){result+="Fizz";}  
      if (i%5==0) {result+="Buzz";}
      if (result=="") {
            cout << i << endl;
      } else {
            cout << result << endl;
      }
      i++;
      sleep(1);
    }
}
