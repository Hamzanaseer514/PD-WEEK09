#include <iostream>
using namespace std;

main()
{
  string word;
  cout<<"Enter the word : ";
  getline(cin,word);
  int size = word.length();
  if(size % 2 == 0)
  {
    cout<<"True";
  }
  else if(size % 2 != 0)
  {
    cout<<"False";
  }
}