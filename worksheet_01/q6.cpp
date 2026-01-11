#include <iostream>
using namespace std;

int main() {
    int totalSeconds, minutes, remainingSeconds;

    cout << "Enter total seconds: ";
    cin >> totalSeconds;


    minutes = totalSeconds / 60;
    remainingSeconds = totalSeconds % 60;


    cout << "Total Seconds: " << totalSeconds
         << ", Minutes: " << minutes
         << ", Remaining Seconds: " << remainingSeconds << endl;

    return 0;
}
