#include <iostream>
#include <string>  // for using string type

using namespace std;

int main() {
    // Declare variables for age and citizenship
    int age;
    string isCitizen;

    // Prompt user for their age
    cout << "Enter your age: ";
    cin >> age;

    // Prompt user for citizenship status (yes or no)
    cout << "Are you a citizen of the country? (yes/no): ";
    cin >> isCitizen;

    // Check eligibility for voting
    if (age >= 18 && (isCitizen == "yes" || isCitizen == "Yes")) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}