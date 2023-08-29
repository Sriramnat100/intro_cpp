//Sriram Natarajan
//Linda Ngyuen
//Team N

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  string salsa[] = {"mild", "medium", "sweet", "hot", "zesty"};
  int jars[5];
  int i;
  int total;
  int max_val;
  int min_val;
  string max_str;
  string min_str;
  
  
//Only taking positive values for jars sold
  for (i = 0; i < 5; i ++) {  
    do {
      cout << "Jars sold last month of " << salsa[i] << ": " ;
      cin >> jars[i];
    } while (jars[i] < 0);
  }

  
  total = 0;
  max_val = jars[0];
  min_str = jars[0];

  //Calculating the total jars, the max value, and the minimum value
  for (i = 0; i < 5; i++) {
    total = total + jars[i];
    if (jars[i] >= max_val) {
      max_val = jars[i];
      max_str = salsa[i];
    }
    if (jars[i] <= min_val) {
      min_val = jars[i];
      min_str = salsa[i];
    }
    
  }

  //Outputting everything
  cout << endl;
  cout << "Salsa Sales Report" << endl;

  cout << left << setw(21) << "Name" << "Jars Sold" << endl;

  for (i = 0; i< 11; i++) {
    cout << "---";
  }

  cout << endl;
  for (i = 0; i < 5; i++) {
    cout << left << setw(25) << salsa[i] << jars[i] << endl;
  }

  cout << endl;
  cout << left << setw(25) << "Total: " << total << endl;
  cout << left << setw(25) << "Highest Seller: " << max_str << endl;
  cout << left << setw(25) << "Lowest Seller: " << min_str << endl;
  

  
  return 0;
}