//Sriram Natarajan
//Linda Ngyuen
//Team N
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()

{
  //Defined as double so it is easier to make calculations
  int total_cals;
  int fat_grams;
  int fat_cals;
  double fat_percent;

  //getting the inputs of total calories and grams of fat
  cout << "What are the total calories" << endl;
  cin >> total_cals;
  cout << "What are grams of fat" << endl;
  cin >> fat_grams;

  fat_cals = fat_grams * 9;

  //Calculating fat percent by converting integer to double and rounding up
  fat_percent = ((static_cast<double>(fat_cals) / total_cals * 100));

//No need to convert back to integer and remove contents after the decimal point because we are setting precision to 2.
  cout << fixed << setprecision(0);
  
  //Outputting results. Aditionally, converting 
  cout << "Fat Calories: " << fat_cals << endl;
  cout<< "Fat Percentage: " << fat_percent;

  return 0;
}