//Sriram Natarajan
//Linda Ngyuen
//Team N
#include <iostream>
using namespace std;

//defining global variables
float pi = 3.14;
float slice_area = 14.13;

int main()
{
    int pizza_rad;
    int slices;
    cout << "Please enter pizza radius:" << endl; 
    cin >> pizza_rad; //Taking input of radius
    slices = ((pi * pizza_rad * pizza_rad) / (slice_area)); // Finding area of pizza and dividing by slice area.
    cout << "Number of Slices: " << slices << endl; //output
}