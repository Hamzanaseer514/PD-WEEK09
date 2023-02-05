#include <iostream>
using namespace std;

main()
{
  string fruit[4] = {"peach", "apple", "guava", "watermelon"};
  int price[4] = {60, 70, 40, 30};
  string fruitName;
  cout << "Enter the fruit name : ";
  cin >> fruitName;
  int kilograms;
  int total;
  cout << "Enter the kilograms of fruit : ";
  cin >> kilograms;
  for (int index = 0; index < 4; index++)
  {
    if (fruitName == fruit[index])
    {
      total = price[index] * kilograms;
      cout << total;
      break;
    }
  }
}