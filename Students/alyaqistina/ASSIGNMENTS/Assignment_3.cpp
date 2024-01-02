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

    int total = getInput(uni, intake, enrll, output); 

    for(int i = 0; i < total; i++)
    {
            cout << "\t" << uni[i] << "\t\t\t\t" << intake[i] << "\t\t\t" << enrll[i] << "\t\t\t" << output[i] << "\n";
    }
    
    cout << "-------------------------------------------------------------------------\n";
    
    calTotal(intake, enrll, output, sumIntake, sumEnrll, sumOutput);

    getLowest(intake, enrll, output, total, lIntake, lEnrll, lOutput);

    getHighest(intake, enrll, output, total, hIntake, hEnrll, hOutput);

    cout << "\tTOTAL\t\t\t\t\t" << 22222 << "\t\t\t\t" << 22222 << "\t\t\t" << 22222 << "\n";

    cout << "\tAVERAGE\t\t\t\t\t" << 2222 << "\t\t\t\t" << 2222 << "\t\t\t" << 2222 <<"\n";

    cout << "-------------------------------------------------------------------------\n";
    cout << "\n";

    cout << "THE LOWEST NUMBER OF STUDENTS' INTAKE         = " << 2222 << " (" << 2222 << ")\n";

    cout << "THE LOWEST NUMBER OF STUDENTS' ENROLMENT      = " << 2222 << " (" << 2222 << ")\n";

    cout << "THE LOWEST NUMBER OF STUDENTS' OUTPUT         = " << 2222 << " (" << 2222 << ")\n\n";

    cout << "THE HIGHEST NUMBER OF STUDENTS' INTAKE        = " << 2222 << " (" << 2222 << ")\n";

    cout << "THE HIGHEST NUMBER OF STUDENTS' ENROLMENT     = " << 2222 << " (" << 2222 << ")\n";

    cout << "THE HIGHEST NUMBER OF STUDENTS' OUTPUT        = " << 2222 << " (" << 2222 << ")\n\n";

    cout << "THE RANGE OF NUMBER OF STUDENTS' INTAKE       = " << 2222 << "\n";

    cout << "THE RANGE OF NUMBER OF STUDENTS' ENROLMENT    = " << 2222 << "\n";

    cout << "THE RANGE OF NUMBER OF STUDENTS' OUTPUT       = " << 2222 << "\n\n";

    cout << "-----------------------------------------------------------------------\n";

    return 0;
}

//TASK 1
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


void calTotal(int, int, int, int, int &, int &, int &){}
void getLowest(int, int, int, int, int &, int &, int &){}
void getHighest(int, int, int, int, int &, int &, int &){}