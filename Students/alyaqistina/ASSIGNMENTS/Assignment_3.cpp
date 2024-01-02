/* QUESTION 2
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//FUNCTION PROTOTYPE:
int getInput(string, int, int, int);
void calTotal(int, int, int, int, int &, int &, int &);
void getLowest(int, int, int, int, int &, int &, int &);
void getHighest(int, int, int, int, int &, int &, int &);

int main()
{
    string uni[100];
    int i, total, intake[100], enrll[100], output[100],
        sumIntake = 0, sumEnrll = 0, sumOutput = 0,
        lIntake, lEnrll, lOutput, 
        hIntake, hEnrll, hOutput;

    
    

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
    
    calTotal(intake, enrll, output, sumIntake, sumEnrll, sumOutput);

    getLowest(intake, enrll, output, total, lIntake, lEnrll, lOutput);

    getHighest(intake, enrll, output, total, hIntake, hEnrll, hOutput);

    cout << "\t  TOTAL\t\t\t\t\t" << sumI << "\t\t\t\t" << sumE << "\t\t\t" << sumO << "\n";

    cout << "\t  AVERAGE\t\t\t\t\t" << sumI/total << "\t\t\t\t" << sumE/total << "\t\t\t" << sumO/total <<"\n";

    cout << "-------------------------------------------------------------------------\n";
    cout << "\n";

    cout << "THE LOWEST NUMBER OF STUDENTS' INTAKE         = " << t[lowI] << " (" << uni[lowI] << ")\n";

    cout << "THE LOWEST NUMBER OF STUDENTS' ENROLMENT      = " << e[lowE] << " (" << uni[lowE] << ")\n";

    cout << "THE LOWEST NUMBER OF STUDENTS' OUTPUT         = " << o[lowO] << " (" << uni[lowO] << ")\n\n";

    cout << "THE HIGHEST NUMBER OF STUDENTS' INTAKE        = " << t[highI] << " (" << uni[highI] << ")\n";

    cout << "THE HIGHEST NUMBER OF STUDENTS' ENROLMENT     = " << e[highE] << " (" << uni[highE] << ")\n";

    cout << "THE HIGHEST NUMBER OF STUDENTS' OUTPUT        = " << o[highO] << " (" << uni[highO] << ")\n\n";

    cout << "THE RANGE OF NUMBER OF STUDENTS' INTAKE       = " << t[highI] - t[lowI] << "\n";

    cout << "THE RANGE OF NUMBER OF STUDENTS' ENROLMENT    = " << e[highE] - e[lowE] << "\n";

    cout << "THE RANGE OF NUMBER OF STUDENTS' OUTPUT       = " << o[highO] - o[lowO] << "\n\n";

    cout << "-----------------------------------------------------------------------\n";

    return 0;
}

//TASK 1:
int getInput(string u[], int t[], int e[], int o[])
{
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
void calTotal(int t[], int e[], int o[], int total, int &sumI, int &sumE, int &sumO)
{
    for(int i = 0; i < total; i++)
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