#include <iostream>
#include <iomanip>

using namespace std;
int main() {
  //declaring variables
  int user_response;
  double dist;
  
  //getting inputs from users
  cout << "Select a medium: " << endl << "1. Air" << endl << "2. Water" << endl << "3. Steel" << endl;
  cout << "Choice: ";
  cin >> user_response;
  cout << "Distance: ";
  cin >> dist;

  //making sure that distance is valid
  if (dist < 0) {
    cout << "Invalid distance";
  }

  //looking at switch cases and performing calculations
  else {

    switch(user_response) {
      case 1: 
        cout << fixed << setprecision(4) << "A sound wave takes " << (dist / 1100) << " seconds to travel " << dist << " feet through air.";
        break;
    
      case 2: 
        cout << fixed << setprecision(4) <<"A sound wave takes " << (dist / 4900) << " seconds to travel " << dist << " feet through water.";
        break;

      case 3: 
        cout << fixed << setprecision(4) <<"A sound wave takes " << (dist / 16400) << " seconds to travel " << dist << " feet through steel.";
        break;

      default:
        cout << "Invalid Option";
        break;
    
    }
    
  }






  return 0;
}