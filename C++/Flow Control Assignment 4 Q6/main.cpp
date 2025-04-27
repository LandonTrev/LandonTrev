#include <iostream>
using namespace std;

int main() {
    int items;
    double price;
    double totalCost = 0.0;
    double discount = 0.0;

    // asks for # of items
    cout << "How many items do you want to purchase? ";
    cin >> items;

    // input for each item and calculate the total cost
    for (int i = 1; i <= items; ++i) { //loop starts at 1 and runs until reaches # of items
        cout << "Enter the price of item " << i << ": $";
        cin >> price; //stores in price variable
        totalCost += price; //updates totalCost variable adding the price of items to 0.0
    }

    // original total cost before discount
    cout << "Original total cost: $" << totalCost << endl;

    // if-else statement to apply discount depending on totalCost
    if (totalCost > 500) {
        discount = 0.25;  // 25% discount for total above 500
    } else if (totalCost > 200) {
        discount = 0.15;  // 15% discount for total above 200
    }

    // variables for total after discounts
    double discountAmount = totalCost * discount;
    double finalTotal = totalCost - discountAmount;

    // displays discount applied (15%,25%), discount amount, and total after discounts
    if (discount > 0) {
        cout << "Discount applied: " << (discount * 100) << "%" << endl;
        cout << "Discount amount: $" << discountAmount << endl;
    }
    cout << "Final total after discount: $" << finalTotal << endl;

    return 0;
}