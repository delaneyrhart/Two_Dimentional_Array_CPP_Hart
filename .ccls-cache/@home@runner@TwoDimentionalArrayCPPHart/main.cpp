//Delaney Hart
//COSC 1437-58002
//Teacher: Dr. Tyson McMillan
//Date: 4/4
//A program to practice working with multi-dimensional arrays

#include <iostream>
using namespace std;

/*

Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

Clarksville, TN = 1, Boston, MA = 2

//Data Table

//City X, Day X: Temp

City 1, Day 1: 62

City 1, Day 2: 61

City 1, Day 3: 58

City 1, Day 4: 69

City 1, Day 5: 72

City 1, Day 6: 73 

City 1, Day 7: 75

Boston, Day 1: 46

City 2, Day 2: 48

City 2, Day 3: 62

City 2, Day 4: 60

City 2, Day 5: 55

City 2, Day 6: 63

City 2, Day 7: 71

*/

 

int main()

{

      const int CITY = 2;
      const int WEEK = 7;

    int temperature[CITY][WEEK];

    //Note your input data from the above

    cout << "Enter all temperature for a week of first city and then second city. \n";

    // Inserting the values into the temperature array

    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

    for (int i = 0; i < CITY; ++i)//loops 2 times
    {
        for(int j = 0; j < WEEK; ++j)//loops 7 times
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";
            cin >> temperature[i][j];
        }
    }

    cout << "\n\nDisplaying Values:\n";

    // Accessing the values from the temperature array

    for (int i = 0; i < CITY; ++i)//the same except outputs
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }
    }

  //Create a one dimensional array, cityOne[7] to store the 7 temperatures of city 1, assume that value 0 represents day 1, 1 represents day 2....
  int count;
  const int TEMP = 7;
  int cityOne[TEMP] = {62, 61, 58, 69, 72, 73, 75};

//  Create a on dimensional array, cityTwo[7] to store the 7 temperatures of city 2 , assume that value 0 represents day 1, 1 represents day 2....
  int cityTwo[TEMP] = {46, 48, 62, 60, 55, 63, 71};

  /*
      3. Using a for loop (or nested for loop), feed the data of CityOne[] and CityTwo[] into temperature[i][j], where i is index of the City Number, and j is the index of the temp for the day.

      4. print the results of temperature[i][j]; to the screen.

    */

    return 0;

}