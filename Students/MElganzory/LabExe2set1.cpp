#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter an integer number: ";
    cin >> number; // Asks the user to enter an integer from the user

    int sumOfDigits = 0;
    int originalNumber = number;

    while (number > 0) {
        sumOfDigits = sumOfDigits + (number % 10);
        number = number / 10;
    }

    cout << "The sum of digits for " << originalNumber << " is: " << sumOfDigits << endl;

    // Check if the sum is a multiple of 3, 4, and/or 5
    bool isMultipleOf3 = (sumOfDigits % 3 == 0);
    bool isMultipleOf4 = (sumOfDigits % 4 == 0);
    bool isMultipleOf5 = (sumOfDigits % 5 == 0);

    cout << "Sum of digits: " << sumOfDigits << endl;
    
    if (isMultipleOf3)
        cout << "The sum of digits is a multiple of 3." << endl;
    
    if (isMultipleOf4)
        cout << "The sum of digits is a multiple of 4." << endl;
    
    if (isMultipleOf5)
        cout << "The sum of digits is a multiple of 5." << endl;
    
    if (!isMultipleOf3 && !isMultipleOf4 && !isMultipleOf5)
        cout << "The sum of digits is not a multiple of 3, 4, or 5." << endl;
    
    return 0;
}
