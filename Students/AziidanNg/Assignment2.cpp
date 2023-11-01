//MUHAMMAD AZIIDAN BIN MUHD AZLAN NG
//ASSIGNMENT 2

#include <iostream>
using namespace std;
//Aziidan Punya Tau Jangan TIRUUUU

void activityLevel(double bmr) { //function activityLevel
    double bmr2,bmr3,bmr4,bmr5,bmr6,bmr7;
    bmr2= 1.2*bmr;
    bmr3= 1.375*bmr;
    bmr4= 1.465*bmr;
    bmr5= 1.55*bmr;
    bmr6= 1.725*bmr;
    bmr7= 1.9*bmr;

    cout << "\nSedentary: little or no exercise : " << bmr2;
    cout << "\nExercise 1-3 times/week : " << bmr3;
    cout << "\nExercise 4-5 times/week : " << bmr4;
    cout << "\nDaily exercise or intense exercise 3-4 times/week : " << bmr5;
    cout << "\nIntense exercise 6-7 times/week : " << bmr4;
    cout << "\nVery intense exercise daily, or physical job : " << bmr5;
    }

int main() {    
    // Declare variable
    int age;
    double height,weight,bmr;
    bool gender,again=true;

    // while loop untuk ulang selagi true
    while (again==true)
    {
    // User Input
    cout << "\nInsert age :";
    cin >> age;

    cout << "Insert height in cm :";
    cin >> height;

    cout << "Insert weight in kg :";
    cin >> weight;

    cout << "Insert gender Male:1 / Female:0 :";
    cin >> gender;

    // if-else untuk semak syarat umur betul/salah
    if (age<=80 && age >=15)
        {
            if (gender==true){ //Male
                bmr = (10*weight) + (6.25*height) - (5*age) + 5;
                cout << "\n" << bmr << " Calories/day";

                    activityLevel(bmr);

                    cout << "\n" << "\nCalculate bmr again Yes:1 / No:0  :";
                    cin >> again;
                }
            else{ // Female
                bmr = (10*weight) + (6.25*height) - (5*age) - 161;
                cout << "\n" << bmr << " Calories/day";

                    activityLevel(bmr);

                    cout << "\n" << "\nCalculate bmr again Yes:1 / No:0  :";
                    cin >> again;
                }
        }
    else
        cout << "\nPlease provide an age between 15 and 80\n";
    }
}