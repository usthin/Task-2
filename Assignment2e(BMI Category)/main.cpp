#include <iostream>
#include <iomanip>  // for setting precision

using namespace std;

int main() {
    // Declare variables for weight, height, and BMI
    double weight, height, bmi;

    // Prompt user for input
    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    cout << "Enter your height in meters: ";
    cin >> height;

    // Calculate BMI
    bmi = weight / (height * height);

    // Output the BMI value
    cout << fixed << setprecision(2);  // Set precision to 2 decimal places
    cout << "Your BMI is: " << bmi << endl;

    // Classify and output the BMI category
    if (bmi < 18.5) {
        cout << "Category: Underweight" << endl;
    } else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "Category: Normal weight" << endl;
    } else if (bmi >= 25 && bmi < 29.9) {
        cout << "Category: Overweight" << endl;
    } else {
        cout << "Category: Obese" << endl;
    }

    return 0;
}