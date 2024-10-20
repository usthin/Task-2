#include <iostream>
#include <iomanip>  // for setting precision

using namespace std;

int main() {
    // Declare variables for the original price, discount, and final price
    double originalPrice, discount = 0.0, finalPrice;

    // Prompt user for the original price of the product
    cout << "Enter the original price of the product: $";
    cin >> originalPrice;

    // Check if a discount applies (10% discount if price is over $100)
    if (originalPrice > 100.0) {
        discount = originalPrice * 0.10;  // 10% discount
    }

    // Calculate the final price
    finalPrice = originalPrice - discount;

    // Output the results
    cout << fixed << setprecision(2);  // Set precision to 2 decimal places
    cout << "Original Price: $" << originalPrice << endl;
    cout << "Discount Amount: $" << discount << endl;
    cout << "Final Price: $" << finalPrice << endl;

    return 0;
}