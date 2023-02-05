#include <iostream>
using namespace std;

main()
{
  int arrsize = 3;
  int number[arrsize];

  for(int index = 0;index < arrsize;index++)
  {
    cout<<"Enter the numbers : ";
    cin>>number[index];
  }
  int executionTime;
  cout<<"Enter the execution times of  array : ";
  cin>>executionTime;
  for(int index = 0;index < arrsize;index++)
  {
    if(number[index] % 2 == 0)
    {
      cout<<number[index] - (executionTime * 2)<<"  ";
    }
    else if(number[index] % 2 != 0)
    {
      cout<<number[index] + (executionTime * 2)<<"  ";
    }
  }
}