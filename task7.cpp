#include <iostream>
using namespace std;

main()
{
  char word[100];
  char word2[100];
  cout << "Enter the first word : ";
  cin >> word;
  cout << "Enter the second word : ";
  cin >> word2;
  int count = 0;
  for (int index = 0; word[index] != '\0'; index++)
  {
    for (int y = 0; word2[y] != '\0'; y++)
    {
      if (word[index] == word2[y])
      {
        count++;
        word2[y] = '*';
        break;
      }
      else
      {
        continue;
      }
    }
  }
  cout << count;
}