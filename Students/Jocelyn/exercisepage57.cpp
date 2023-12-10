#include <iostream>
using namespace std;
/* Write a program that has two overloaded functions that return the average of an array with the following headers:
int average(int array[], int size)
double average(int array[], int size)
Use {1,2,3,4,5,6} and 
{6.0,4.4,1.9,2.9,3.4,3.5} to test the functions.
 */

int average(int array[], int size){



    return
}

double average(int array[], int size){



    return
}

int main(){
	
    int intArray = {1, 2, 3, 4, 5, 6};
    int doubleArray = {6.0, 4.4 1.9, 2.9, 3.4, 3.5};
    int size = sizeof (intArray), sizeof(doubleArray);

    int intAvg(intArray, size);
    cout << "The average of int array" << intAvg << endl;

    double doubleAvg(doubleArray, size);
    cout << "The average of double array" << doubleAvg << endl;
	
	return 0;
}