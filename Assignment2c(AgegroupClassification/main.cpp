#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the person's age
    int age;

    // Input the person's age
    cout << "Enter your age: ";
    cin >> age;

    // Check if the input age is valid
    if (age < 0) {
        cout << "Invalid age. Please enter a non-negative number." << endl;
    } else {
        // Determine the age group based on the given categories
        if (age <= 12) {
            cout << "You are a Child." << endl;
        } else if (age <= 19) {
            cout << "You are a Teenager." << endl;
        } else if (age <= 64) {
            cout << "You are an Adult." << endl;
        } else {
            cout << "You are a Senior." << endl;
        }
    }

    return 0;
}
