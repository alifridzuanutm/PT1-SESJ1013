#include <iostream>
using namespace std;

int main(){
    int num, digit, product=1;
    bool firstDigit = true;

    cout << "Enter an integer number: ";
    cin >> num;

    do {
        digit = num % 10;
        num /= 10;
        product *= digit;

        if (!firstDigit){
            cout << " * ";
        } else {
            firstDigit = false;
        }
        cout << digit;
    } while (num != 0);

    cout << " = " << product << endl;
    cout << product << " is multiples of ";

    if (product % 7 == 0){
        cout << "7";
    }

    if (product % 4 == 0){
        if (product % 7 == 0 && product % 5 == 0){
            cout<<", 4";
        } else if (product % 7 != 0){
            cout<<"4";
        } else {
            cout << " and 4";
        }
    }

    if (product % 5 == 0){
        if (product % 7 == 0 || product % 4 == 0){
            cout<<" and 5";
        } else {
            cout<<"5";
        }
    }

    return 0;
}