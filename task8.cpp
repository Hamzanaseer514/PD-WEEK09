#include <iostream>

using namespace std;

int main()
{
  int size;
  int counter = 0;
  int time;
  cout << "Enter the number of squares : ";
  cin >> size;
  string color[size];
  for (int index = 0; index < size; index++)
  {
    cout << "Enter the color : ";
    cin >> color[index];
  }
  for (int index = 1; index < size; index++)
  {
    if (color[index] != color[index - 1])
    {
      counter++;
    }
  }
  time = size * 2 + (counter++);
  cout << time;
}