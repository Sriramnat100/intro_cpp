//Sriram Natarajan
//Linda Ngyuen

#include <iostream>
using namespace std;

int main() {
  string name;
  string city;
  int age;
  string college;
  string profession;
  string animal;
  string pet_name;

  //Getting all inputs of variables
  cout << "Enter the following:" << endl;
  cout << "Name: ";
  getline(cin, name);
  
  cout << "City: ";
  getline(cin, city);
  
  cout << "Age: ";
  cin >> age;

  //ignoring the current line as getline will get the whole line so it messes up when there is a cin previously
  cin.ignore();
  
  cout << "College: ";
  getline(cin, college);
  
  cout << "Profession: ";
  getline(cin, profession);
  
  cout << "Animal: ";
  getline(cin, animal);
  
  cout << "Pet Name: ";
  getline(cin, pet_name);

  //formating
  cout << "There was once a person named " << name << " who lived in " << city << ". At the age of "
       << age << ", " << name << " went to college at " << college << ". " << name << " graduated and went to work as a "
       << profession << ". Then, " << name << " adopted a(n) " << animal << " named " << pet_name << ". They both lived happily ever after."
       << endl;
  
  return 0;
}
