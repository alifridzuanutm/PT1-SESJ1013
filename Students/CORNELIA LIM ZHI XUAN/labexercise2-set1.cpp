#include <iostream>

int main() {
    // Declare variables
    int number, digit, product = 1;

    // Read an integer number from the user
    std::cout << "Enter an integer number: ";
    std::cin >> number;

    // Calculate the product of digits
    int originalNumber = number;
    std::cout << originalNumber << " = ";

    while (number != 0) {
        digit = number % 10;
        product *= digit;
        std::cout << digit;

        number /= 10;
        if (number != 0) {
            std::cout << " * ";
        }
    }

    std::cout << " = " << product << std::endl;

    // Check for multiples of 4, 5, and 7
    std::cout << product << " is multiples of ";
    bool isMultiple = false;

    if (product % 4 == 0) {
        std::cout << "4";
        isMultiple = true;
    }

    if (product % 5 == 0) {
        if (isMultiple) {
            std::cout << " and ";
        }
        std::cout << "5";
        isMultiple = true;
    }

    if (product % 7 == 0) {
        if (isMultiple) {
            std::cout << " and ";
        }
        std::cout << "7";
    }

    if (!isMultiple) {
        std::cout << "None";
    }

    std::cout << std::endl;

    return 0;
}

