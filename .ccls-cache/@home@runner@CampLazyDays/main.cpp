#include <iostream>
using namespace std;
int main() 
{

  int temperature;
  string activity;
  cout << "Enter the temperature" << endl;
  cin >> temperature;

  switch(temperature) {
    case 60 ... 79: activity = "tennis";
    break;
    case 40 ... 59: activity = "golf";
    break;
    case 0 ... 39: activity = "skiing";
    break;
    default: activity = "swimming";
  }

  cout << activity;
  return 0;
}