#include <iostream>
using namespace std;

float pi = 3.14;
float slice_area = 14.13;
int main()

{
    int pizza_rad;
    float slices;
    cout << "Please enter pizza radius:" << endl;
    cin >> pizza_rad;
    slices = ((pi * pizza_rad * pizza_rad)/(slice_area));
    cout << "Number of Slices:" << slices << endl;
}