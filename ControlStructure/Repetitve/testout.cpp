#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  //Declaration
  int row = 0, num = 0, point = 0;

  system("clear");
  //Prompt & Read
  cout << "How many Row: ";
  cin >> row;

  num = (row * 2 -1);
  point = row;
  //Row
  for(int i = 1; i <= row; i++)
  {
    int counter = i;
    int temp = num-1;
    //Col
    for (int j = 1; j <= num ; j++)
    {
      //Row b4 the last row
      if (i < row)
      {
        // half the row
        if (j == row)
        {
          cout << i;
        }
        else
        {
          cout << " ";
        }
      }
      //Last Row
      else
      {
        // If j(3) == num(3)
        if (j >= point+1)
        {
          if (temp >= row)
          {
            cout << temp--;
          }//END of While
        }//END of If
        else
        {
          cout << counter++;
        }
      }//END of Else

    }//End of Col (For)

    cout << endl;

  }//End of Row (For)

}
