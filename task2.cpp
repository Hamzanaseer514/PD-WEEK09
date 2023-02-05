#include <iostream>
using namespace std;

main()
{
  string movies[5] = {"Gladitor","StarWars","Terminator","TakingLives","TombRider"};
  string movieName;
  cout<<"Enter the name of movie : ";
  cin>>movieName;
  int price  = 500;
  int total;

  for(int index = 0;index < 5;index++)
  {
    if(movieName == movies[index] && index%2 != 0)
    {
      total = price - ((price*5)/100); 
      cout<<"Your price of movie ticket is "<< total;
    }
    else if (movieName == movies[index] && index%2 == 0)
    {
      total = price - ((price*10)/100); 
      cout<<"Your price of movie ticket is "<<total;
    }
  }
}