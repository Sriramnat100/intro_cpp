//Sriram Natarajan
//Linda Ngyuen
//Team N

#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream inFS;
  int sum = 0;
  int count;
  int num;

  //Opening file
  inFS.open("random.txt");

  if (!inFS.is_open()) {
   cout << "Could not open file"<< endl;
  }

  count = 0;

  //Iterating through file and updating variables
  while(!inFS.eof()) {
    inFS >> num;
    sum = sum + num;
    count = count + 1;
  }

  //outputting everything
  cout << "Number of Numbers: " << count<< endl;
  cout << "Sum of Numbers: " << sum << endl;
  cout << "Average: " << static_cast<double>(sum)/count << endl;
}