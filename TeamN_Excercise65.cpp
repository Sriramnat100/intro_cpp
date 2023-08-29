//Sriram Natarajan
//Linda Ngyuen
//Team N

#include <iostream>
using namespace std;


//Function performs and outputs calculations given from the get_info function
void calcs(int spord, int spock, int rate) {
  int total;
  total = (spock * 100) + spock * rate;
  
  cout << "Amnt ordered: " << spord << endl;
  cout << "Ready to ship: " << spock<< endl;
  if (spord > spock) {
    cout << "On backorder: " << spord - spock<< endl;
  }
  else {
    cout << "None on backorder" << endl;
  }
  //Outputting final
  cout << "Subtotal: " << spock * 100 << endl;
  cout << "Shipping: " << spock * rate << endl;
  cout << "Total Due: " << total << endl;
  
}

//Getting inputs and also determening if special rate needed
void get_info() {
  int spord;
  int spock;
  char ans;
  int rate;
  
  cout << "How many ordered?" << endl;
  cin >> spord;

  
  cout << "How many in stock?" << endl;
  cin >> spock;
  cout << "Special rate y/n?" << endl;
  cin >> ans;

  if (ans == 'y') {
  cout << "what is rate" << endl;
  cin >> rate;
  }
  else {
    rate = 10;
  }

  calcs(spord, spock, rate);
  
}



//Calling function
int main() {
  get_info();
  
}