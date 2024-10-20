#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the student's score
    int score;

    // Input the student's score
    cout << "Enter the student's score (0-100): ";
    cin >> score;

    // Check if the score is within the valid range
    if (score < 0 || score > 100) {
        cout << "Invalid score. Please enter a score between 0 and 100." << endl;
    } else {
        // Determine the grade and performance message
        char grade;
        string message;

        if (score >= 90) {
            grade = 'A';
            message = "Excellent work!";
        } else if (score >= 80) {
            grade = 'B';
            message = "Good job!";
        } else if (score >= 70) {
            grade = 'C';
            message = "Fair performance!";
        } else if (score >= 60) {
            grade = 'D';
            message = "Needs improvement!";
        } else {
            grade = 'F';
            message = "Failing. Better luck next time.";
        }

        // Output the grade and performance message
        cout << "The student's grade is: " << grade << endl;
        cout << "Performance: " << message << endl;
    }

    return 0;
}
