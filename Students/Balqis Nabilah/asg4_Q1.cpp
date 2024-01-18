//Name: BALQIS NABILAH BINTI MUHAMMAD AZWAN
//Matrics number: A23CS0054
//Date: 17/1/2024
//Assignment 4

#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>

using namespace std;

const int maxItem = 50;	//maximum number of items

//declare structure
struct Item 
{
	char code[5];	//items' code
	char name[20];	//items' name
	double cost;	//items' cost
	double sale;	//items' sale price 
	int sold;		//number of items' sold
	double profit;	//items' profit
};

//function prototype
int readInput(Item x[]);
void determineCost(Item x[], int numOfItems);
void displayOutput(Item x[], int numOfItems);
void displayAnalysis(Item x[], int numOfItems);

int main()
{
    Item x[maxItem];	//array of structure

    int numOfItems = 0;

    numOfItems = readInput(x);			//call readInput function
    determineCost(x, numOfItems);		//call determineCost function
    displayOutput(x, numOfItems);		//call displayOutput function
	displayAnalysis(x, numOfItems);		//call displayAnalysis function
	
    return 0;
}

//function to read data from input file
int readInput(Item x[])
{
	int noofitem =0;
    ifstream input("input.txt");	//read data from input
    if (!input)
	{
		cout << "While opening a file an error is encountered" << endl;
		return 0;
	} 

    int i = 0;
    while (!input.eof() )
    {
    	//input.getline(x[i].code,5);
    	input >> x[i].code >> x[i].sold;
    	noofitem++;
    	i++;    
    } 
    
    input.close();
    
    return noofitem;
}

//function to determine name and price of item
void determineCost(Item x[], int numOfItems)
{
	for (int i = 0; i < numOfItems; i++)
	{
		if (strcmp(x[i].code, "M101") == 0) {		
			strcpy(x[i].name,"Double Mushroom");
			x[i].cost = 11.50;				
		}
		
		if (strcmp(x[i].code, "B202") == 0) {
			strcpy(x[i].name,"Double BBQ Beef");
			x[i].cost = 10.20;
		}
		
		if (strcmp(x[i].code, "C303") == 0){
			strcpy(x[i].name,"Grilled Chicken" );
			x[i].cost = 7.0;
		}
		
		if (strcmp(x[i].code, "F404") == 0){
			strcpy(x[i].name,"Fish'n Crisp" );
			x[i].cost = 6.25;
		}
		
		x[i].sale = x[i].cost * 1.30;
	}

}

//function to display total profit for each item, total profit for all and item with highest profit
void displayOutput(Item x[], int numOfItems)
{
	
	cout << "--------------------------------------------------------------------" << endl;
    cout << "CODE    ITEM NAME \t COST(RM)   SALE(RM)   QUANTITY   PROFIT(RM)" << endl;
    cout << "--------------------------------------------------------------------" << endl;
    
    for (int i = 0; i < numOfItems; i++)
    {
    	x[i].profit = x[i].sold * (x[i].sale - x[i].cost);
    	
    	cout << fixed << showpoint << setprecision(2);
    	
        cout << x[i].code << "\t" << x[i].name << "\t " 
		<< setw(7) << x[i].cost << setw(10) << x[i].sale << "\t " 
		<< setw(3) << x[i].sold << "\t" << setw(9) << x[i].profit << endl;
	}
}


void displayAnalysis(Item x[], int numOfItems)
{
	float totM, totB, totC, totF, totAll, highest;
	int i;
	cout << "--------------------------------------------------------------------" << endl;
	cout << "\t\t ITEM NAME \t\t TOTAL PROFIT (RM)" << endl;
	
	for (i = 0; i < numOfItems; i++)
	{
		if (strcmp(x[i].code, "M101") == 0) {
			totM += x[i].profit;				//find total of M101 Double Mushroom
		}
		
		if (strcmp(x[i].code, "B202") == 0) {
			totB += x[i].profit;				//find total of B202 Double BBQ Beef
		}
		
		if (strcmp(x[i].code, "C303") == 0) {
			totC += x[i].profit;				//find total of C303 Grilled Chicken
		}
		
		if (strcmp(x[i].code, "F404") == 0) {
			totF += x[i].profit;				//find total of F404 Fish'n Crisp
		}
	}
	
	cout << "\t      Double Mushroom" << setw(23) << totM << endl;		//find total profit of each item
	cout << "\t      Double BBQ Beef" << setw(23) << totB << endl;		
	cout << "\t      Grilled Chicken" << setw(23) << totC << endl;		
	cout << "\t      Fish'n Crisp" << setw(26) << totF << endl;
	
	cout << "--------------------------------------------------------------------" << endl;

	totAll = totM + totB + totC + totF;
	cout << "\t      The total amount of profit = RM " << totAll << endl;
	
	if (totM > totB && totM > totC && totM > totF) {		//find the highest profit
		highest = totM;
	}
	if (totB > totM && totB > totC && totB > totF) {
		highest = totB;
	}
	if (totC > totM && totC > totB && totC > totF) {
		highest = totC;
	}
	if (totF > totM && totF > totB && totF > totC) {
		highest = totF;
	}
	cout << "\t      Highest profit = RM " << highest << endl;
	
	cout << "--------------------------------------------------------------------" << endl;
}

