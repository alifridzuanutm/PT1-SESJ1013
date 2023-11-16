#include <iostream>
using namespace std;

int main() {
    int n;
    int multiply = 1;

    cout << "Enter an integer number: ";
    cin >> n;

    int m = n;

    cout << "Individual digits: ";
    
    do {
        int rem = m % 10;
        multiply *= rem;
       
        
        if (m > 9) {
            cout << rem << " * ";
        } else {
            cout << rem << " = "  <<multiply<< endl;
        }
         m = m / 10;
    } while (m >0);


if (multiply % 2 == 0) {
        cout << multiply << " is an even number";}
        else {
        cout << multiply << " is an odd number" ;
    }

    if (multiply % 3 == 0) {
        cout <<  "& is a multiple of 3" << endl;
    }

   
    if (multiply % 5 == 0) {
        cout << "& is a multiple of 5" << endl;
    }
    
    

    return 0;
	}

