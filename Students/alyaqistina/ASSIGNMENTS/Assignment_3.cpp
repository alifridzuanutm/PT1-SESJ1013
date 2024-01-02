/* QUESTION 2
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//FUNCTION PROTOTYPE:
int getInput(string[], int[], int[], int[]);
void calTotal(int[], int[], int[], int &, int &, int &);
void getLowest(int[], int[], int[], int, int &, int &, int &);
void getHighest(int[], int[], int[], int, int &, int &, int &);


int main()
{
    string uni[100];
    int i, total, intake[100], enrll[100], output[100],
        sumI = 0, sumE = 0, sumO = 0,
        lowI, lowE, lowO, 
        highI, highE, highO;

    ofstream fileo("output.txt");

    cout << "\t\tNUMBER OF STUDENTS' INTAKE, ENROLMENT AND OUTPUT\t\t\n";
    cout << "\t\t\t\tIN PUBLIC UNIVERSITIES (2015)\n";
    cout << "-------------------------------------------------------------------------\n";
    cout << "\tUNIVERSITY\t\t\t\tINTAKE\t\t\tENROLLMENT\t\t\tOUTPUT\n";
    cout << "-------------------------------------------------------------------------\n";

    total = getInput(uni, intake, enrll, output); 

    if(total == 1){
        cout << "File cannot be found.";
        return 0;
    }

    for(int i = 0; i < total; i++)
    {
            cout << "\t  " << uni[i] << "\t\t\t\t" << intake[i] << "\t\t\t" << enrll[i] << "\t\t\t" << output[i] << "\n";
    }
    
    cout << "-------------------------------------------------------------------------\n";
    
    calTotal(intake, enrll, output, sumI, sumE, sumO);

    getLowest(intake, enrll, output, total, lowI, lowE, lowO);

    getHighest(intake, enrll, output, total, highI, highE, highO);

    cout << "\t  TOTAL\t\t\t\t\t" << sumI << "\t\t\t\t" << sumE << "\t\t\t" << sumO << "\n";

    cout << "\t  AVERAGE\t\t\t\t\t" << sumI/total << "\t\t\t\t" << sumE/total << "\t\t\t" << sumO/total <<"\n";

    cout << "-------------------------------------------------------------------------\n";
    cout << "\n";

    cout << "THE LOWEST NUMBER OF STUDENTS' INTAKE         = " << intake[lowI] << " (" << uni[lowI] << ")\n";

    cout << "THE LOWEST NUMBER OF STUDENTS' ENROLMENT      = " << enrll[lowE] << " (" << uni[lowE] << ")\n";

    cout << "THE LOWEST NUMBER OF STUDENTS' OUTPUT         = " << output[lowO] << " (" << uni[lowO] << ")\n\n";

    cout << "THE HIGHEST NUMBER OF STUDENTS' INTAKE        = " << intake[highI] << " (" << uni[highI] << ")\n";

    cout << "THE HIGHEST NUMBER OF STUDENTS' ENROLMENT     = " << enrll[highE] << " (" << uni[highE] << ")\n";

    cout << "THE HIGHEST NUMBER OF STUDENTS' OUTPUT        = " << output[highO] << " (" << uni[highO] << ")\n\n";

    cout << "THE RANGE OF NUMBER OF STUDENTS' INTAKE       = " << intake[highI] - intake[lowI] << "\n";

    cout << "THE RANGE OF NUMBER OF STUDENTS' ENROLMENT    = " << enrll[highE] - enrll[lowE] << "\n";

    cout << "THE RANGE OF NUMBER OF STUDENTS' OUTPUT       = " << output[highO] - output[lowO] << "\n\n";

    cout << "-----------------------------------------------------------------------\n";

    return 0;
}

//TASK 1:
int getInput(string u[], int t[], int e[], int o[])
{
    ofstream myfile("input.txt");

  // Write to the file
  myfile << "UM 8093 27452 6328 USM 7718 30853 6743 UKM 8109 27239 4765 UPM 8706 30670 7082 UTM 7328 31066 6997 UUM 7254 29143 6709 UIAM 10366 31526 5460 UniMAS 5578 16962 4579 UMS 5041 18531 4064 UPSI 5665 21587 11807 UiTM 65207 174755 38576 UniSZA 3523 9947 2400 UMT 3346 10665 2317 USIM 3675 14781 893 UTHM 4847 16436 4362 UTeM 3148 12370 2428 UMP 2838 9909 2122 UniMAP 4053 13769 2452 UMK 2291 9882 1062 UPNM 1341 3095 1308";

  // Close the file
  myfile.close();
  
    ifstream file("input.txt");

    if(!file){
        return 1;
    }

    int i = 0;

    while(file >> u[i] >> t[i] >> e[i] >> o[i])
    {
        i++;
    }

return i;
}


//TASK 2:
void calTotal(int t[], int e[], int o[], int &sumI, int &sumE, int &sumO)
{
    for(int i = 0; i < 100; i++)
    {
        sumI += t[i];

        sumE += e[i];

        sumO += o[i];

    }

}


//TASK 3:
void getLowest(int t[], int e[], int o[], int total, int &lowI, int &lowE, int &lowO)
{
    int lowest = 999999;

    for(int i = 0; i < total; i++)
    {
        if(t[i] < lowest){
            lowest = t[i];
            lowI = i;
        }

        if(e[i] < lowest){
            lowest = e[i];
            lowE = i;
        }

        if(o[i] < lowest){
            lowest = o[i];
            lowO = i;
        }
    }
}


//TASK 4:
void getHighest(int t[], int e[], int o[], int total, int &highI, int &highE, int &highO)
{
    int highest = -9999999;

    for(int j = 0; j < total; j++)
    {
        if(t[j] > highest){
            highest = t[j];
            highI = j;
        }

        if(e[j] > highest){
            highest = e[j];
            highE = j;
        }

        if(o[j] > highest){
            highest = o[j];
            highO = j;
        }
    }
}





