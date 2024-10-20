#include <iostream>
#include <iomanip>  // for setting precision

using namespace std;

int main() {
    // Declare variables for the scores of homework, midterm, and final exam
    double homeworkScore, midtermScore, finalExamScore, finalGrade;

    // Prompt user to input scores for each assessment
    cout << "Enter your Homework score (out of 100): ";
    cin >> homeworkScore;

    cout << "Enter your Midterm score (out of 100): ";
    cin >> midtermScore;

    cout << "Enter your Final Exam score (out of 100): ";
    cin >> finalExamScore;

    // Calculate the final grade using weighted averages
    finalGrade = (homeworkScore * 0.40) + (midtermScore * 0.30) + (finalExamScore * 0.30);

    // Output the final grade
    cout << fixed << setprecision(2);  // Set precision to 2 decimal places
    cout << "Your Final Grade is: " << finalGrade << "%" << endl;

    // Check if the final grade is passing (60% or higher)
    if (finalGrade >= 60) {
        cout << "You passed the course." << endl;
    } else {
        cout << "You did not pass the course." << endl;
    }

    return 0;
}