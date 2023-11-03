#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char again;

    do {
        double weight, height, age;
        char gender;

        cout << "Enter weight (in kg): ";
        cin >> weight;

        cout << "Enter height (in cm): ";
        cin >> height;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter gender (M/F): ";
        cin >> gender;

        if (age >= 15 && age <= 80) {
            double bmr;
            if (gender == 'M') {
                bmr = (10 * weight) + (6.25 * height) - (5 * age) + 5;
            } else {
                bmr = (10 * weight) + (6.25 * height) - (5 * age) - 161;
            }

            // Activity level processing
            double bmr2 = 1.2 * bmr;
            double bmr3 = 1.375 * bmr;
            double bmr4 = 1.465 * bmr;
            double bmr5 = 1.55 * bmr;
            double bmr6 = 1.725 * bmr;
            double bmr7 = 1.9 * bmr;

            // Display activity level information
            cout << "\nActivity Level" << endl;
            cout << left << setw(55) << "Sedentary: little or no exercise: " << bmr2 << " Calories/day" << endl;
            cout << left << setw(55) << "Exercise 1-3 times/week: " << bmr3 << " Calories/day" << endl;
            cout << left << setw(55) << "Exercise 4-5 times/week: " << bmr4 << " Calories/day" << endl;
            cout << left << setw(55) << "Daily exercise or intense exercise 3-4 times/week: " << bmr5 << " Calories/day" << endl;
            cout << left << setw(55) << "Intense exercise 6-7 times/week: " << bmr6 << " Calories/day" << endl;
            cout << left << setw(55) << "Very intense exercise daily, or physical job: " << bmr7 << " Calories/day" << endl;

            // Activity level description
            cout << left << setw(55) << "\nExercise: 15-30 minutes of elevated heart rate activity" << endl;
            cout << left << setw(55) << "Intense exercise: 45-120 minutes of elevated heart rate activity" << endl;
            cout << left << setw(55) << "Very intense exercise: 2+ hours of elevated heart rate activity" << endl;

            cout << "Calculate another BMR? (Y/N): ";
            cin >> again;
        } else {
            cout << "Enter age between 15 and 80" << endl;
            again = 'Y';
        }

    } while (again == 'Y' || again == 'y');

    cout << "Goodbye!" << endl;

    return 0;
}