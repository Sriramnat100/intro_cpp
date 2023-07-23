#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double weight;
    double dist;
    cout << "Weight of Package: ";
    cin >> weight;
    cout << "Distance the package is to be shipped: ";
    cin >> dist;

    // Check the distance range
    if (10 > dist || dist > 3000) {
        cout << "We don't ship in this distance range." << endl;
    }
    // Check the weight range
    else if (0 > weight || weight > 20) {
        cout << "We don't ship in this weight range." << endl;
    }
    // Calculate the charges based on weight and distance
    else {
        // Rounding distance to the smallest integer greater than the decimal part
        int distIn200MilesBlocks = ceil(dist / 200.0);

      //Determing rates
        if (0 < weight && weight <= 2) {
            cout << fixed << setprecision(2) << 1.10 * distIn200MilesBlocks << endl;
        } else if (2 < weight && weight <= 6) {
            cout << fixed << setprecision(2) << 2.20 * distIn200MilesBlocks << endl;
        } else if (6 < weight && weight <= 10) {
            cout << fixed << setprecision(2) << 3.70 * distIn200MilesBlocks << endl;
        } else if (10 < weight && weight <= 20) {
            cout << fixed << setprecision(2) << 4.80 * distIn200MilesBlocks << endl;
        }
    }

    return 0;
}
