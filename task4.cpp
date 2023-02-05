#include <iostream>
using namespace std;

main()
{
  int arrsize;
  cout << "Enter the size of array : ";
  cin >> arrsize;
  int number[arrsize];
  bool answer = false;
  int value;

  for (int index = 0; index < arrsize; index++)
  {
    cout << "Enter the number : ";
    cin >> number[index];
  }
  for (int index = 0; index < arrsize; index++)
  {
    if (number[index] == 7)
    {
      answer = true;
    }
    else if(number[index] > 9)
    {
      value = number[index]%10;
      number[index] = number[index]/10;
      if(value == 7 || number[index] == 7)
      {
        answer = true;
      }
    }
   
  }
  if (answer == true)
  {
    cout << "BOOM!";
  }
  else
  {
    cout << "there is no 7 in this array !";
  }
}