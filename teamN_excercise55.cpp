//Sriram Natarajan
//Linda Ngyuen
//Team N
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int floors;
    int rooms;
    int occupied;
    int total_rooms = 0;
    int total_occ = 0;
    int i;

    // Input validation for the number of floors (should not be less than 1)
    do {
        cout << "Enter the number of floors (should be at least 1): ";
        cin >> floors;
    } while (floors < 1);

    for (i = 1; i <= floors; i++) {
        if (i != 13) {
            // Input validation for the number of rooms on a floor (should be at least 10)
            do {
                cout << "Enter the number of rooms on floor " << i << " (should be at least 10): ";
                cin >> rooms;
            } while (rooms < 10);

            cout << "How many occupied rooms on floor " << i << ": ";
            cin >> occupied;

            total_rooms += rooms;
            total_occ += occupied;
        }
        else {
            continue;
        }
    }

    cout << "Hotel has a total of " << total_rooms << " rooms" << endl;
    cout << total_occ << " occupied rooms." << endl;
    cout << total_rooms - total_occ << " empty rooms" << endl;
    cout << "Occupancy rate is " << fixed << setprecision(2) << static_cast<double>(total_occ) / total_rooms * 100 << "%" << endl;

    return 0;
}
