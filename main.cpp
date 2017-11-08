#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

//global variables...
const int NUM_LEVELS = 10;

//function prototypes...
int randomNumberBetween(unsigned int, unsigned int);

int main()
{
    srand( time(NULL) );
    vector <int> player1;
    vector <int> player2;
    vector <int> player3;
    
    for(int i=0; i < NUM_LEVELS; i++)
    {
        cout<<"\nPlaying level "<<(i+1)<<"...\n";
        player1.push_back( randomNumberBetween(0,9) );
        cout<<"Player 1 scored "<<player1[i]<<" points.\n";
        player2.push_back( randomNumberBetween(2,7) );  
        cout<<"Player 2 scored "<<player2[i]<<" points.\n";
        player3.push_back( randomNumberBetween(4,5) );
        cout<<"Player 3 scored "<<player3[i]<<" points.\n";
    }
    
    return 0;
}

/**
 * Given two numbers, this function generates a random number in between the
 * value of the numbers provided, including the numbers themselves. For
 * unpredictable values, needs srand(time(NULL)); run once within int main().
 * The numbers can be provided in any order.
 *
 * @param minimum number within range of possible random numbers
 * @param maximum number within range of possible random numbers
 * @return random number between min and max
**/
int randomNumberBetween(unsigned int min, unsigned int max)
{
  if( min > max )
  {
    int temp = min;
    min=max;
    max=temp;
  }
  
  return rand() % (max+1-min) + min;
}