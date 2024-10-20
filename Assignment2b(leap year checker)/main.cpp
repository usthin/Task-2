#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the year
    int year;

    // Input the year
    cout << "Enter a year: ";
    cin >> year;

    // Determine if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}