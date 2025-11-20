#include <iostream>
using namespace std;

int main() {
    int rice[] = {250, 75, 80, 60, 100, 50, 90, 120};
    int target = 50;
    int size = sizeof(rice)/sizeof(rice[0]);

    for (int i = 0; i < size; i++) {
        if (rice[i] == target) {
            cout << "Position: " << i << endl;
            cout << "Value: " << rice[i] << " kg" << endl;
        }
    }
    return 0;
}