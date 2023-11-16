#include <iostream>
using namespace std;

int main() {
    int n;
    int multiple = 1;

    cout << "Enter an integer number: ";
    cin >> n;

    int m = n;

    
    cout << n << " = ";
    while (m > 0) {
        int rem = m % 10;
        multiple *= rem;
        cout << rem;
        m = m / 10;
        if (m > 0) {
            cout << " * ";
        }
    }

    cout << " = " << multiple << endl;

    
        if (multiple % 4 == 0) {
            cout <<multiple<<"is  multiple of 4"<<endl;
        }
        if (multiple % 5 == 0) {
            cout <<multiple<<"is  multiple of 5"<<endl;
        }
        if (multiple % 7 == 0) {
            cout << multiple<<"is  multiple of 7"<<endl;
        }
        cout << endl;
   

    return 0;
}