#include <iostream>
using namespace std;

main()
{
  int arrsize = 4;
  string word[arrsize];
  bool answer;


  for(int index = 0;index < arrsize;index++)
  {
   cout<<"Enter the word : ";
   cin>>word[index];
  
  }
  
   for(int index = 0;index < arrsize;index++)
   {
    if (word[index] == word[index+1] && word[index+1] == word[index+2] && word[index+2] == word[index+3])
    {
      answer = true;
    }
   }
   if(answer == true)
   {
    cout<<"True";
   }
   else if(answer == false)
   {
    cout<<"False";
   }

}