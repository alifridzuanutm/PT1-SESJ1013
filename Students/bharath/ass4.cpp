// Name: Bharath Raj Manivannan
// Matric No.: A23CS0057
// Section: 04
// Date : 17/1/2023
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

const int SIZE = 50;

struct Item {
    string code;
    string name;
    double cost;
    double sale_price;
    int num_item_sold;
    double profit;
};

void readInput(Item items[], int size) {
    ifstream input("input.txt");

    if (!input) {
        cout << "Sorry, input file does not exist!\n";
        return;
    }

    for (int i = 0; i < size; i++) {
        input >> items[i].code >> items[i].num_item_sold;
    }

    input.close();
}

void determineCost(Item items[], int size) {
    for (int i = 0; i < size; i++) {
        if (items[i].code == "M101") {
            items[i].name = "Double Mushroom";
            items[i].cost = 11.5;
        } else if (items[i].code == "B202") {
            items[i].name = "Double BBQ Beef";
            items[i].cost = 10.2;
        } else if (items[i].code == "C303") {
            items[i].name = "Grilled Chicken";
            items[i].cost = 7.0;
        } else if (items[i].code == "F404") {
            items[i].name = "Fish'n Crisp";
            items[i].cost = 6.25;
        }

        if (items[i].cost <= 50) {
            items[i].sale_price = items[i].cost * 1.3;
        } else {
            items[i].sale_price = items[i].cost * 1.25;
        }
    }
}

void displayOutput(Item items[], int size) {
    ofstream output("output.txt");

    if (!output) {
        cout << "Error opening output file!\n";
        return;
    }

    cout << "-------------------------------------------------------------------------" << endl;
    cout << setw(4) << "CODE" << setw(20)  << left << " ITEM NAME" << setw(15) << "COST(RM)" << setw(15) << "SALE(RM)" << setw(15) << "QUANTITY"  << "PROFIT(RM)" << endl;
    cout << "-------------------------------------------------------------------------" << endl;

    double total_profit = 0;

    for (int i = 0; i < size; i++) {
        items[i].profit = items[i].num_item_sold * (items[i].sale_price - items[i].cost);
        total_profit += items[i].profit;

        cout <<left<< setw(5) << items[i].code << left << setw(20)  << items[i].name ;
  cout<<right<< setw(10) << fixed << setprecision(2) << items[i].cost << fixed << setprecision(2) << setw(12) << items[i].sale_price << setw(12) << items[i].num_item_sold << setw(12) << fixed << setprecision(2) << setw(10) << items[i].profit << endl;

        output << items[i].code << " " << items[i].num_item_sold << endl;
    }

    cout << "-------------------------------------------------------------------------" << endl;

    output.close();
}

void displayAnalysis(Item items[], int size) {
    double total1 = 0, total2 = 0, total3 = 0, total4 = 0, highest_profit = 0;

    cout << "                  ITEM NAME                  TOTAL PROFIT(RM)" << endl;

    for (int i = 0; i < size; i++) {
        if (items[i].code == "M101") {
            total1 += items[i].profit;
        } else if (items[i].code == "B202") {
            total2 += items[i].profit;
        } else if (items[i].code == "C303") {
            total3 += items[i].profit;
        } else if (items[i].code == "F404") {
            total4 += items[i].profit;
        }
    }

    cout << setw(30) << right << "Double Mushroom" << setw(27) << right << fixed << setprecision(2) << total1 << endl;
    cout << setw(30) << right << "Double BBQ Beef" << setw(27) << right << fixed << setprecision(2) << total2 << endl;
    cout << setw(30) << right << "Grilled Chicken" << setw(27) << right << fixed << setprecision(2) << total3 << endl;
    cout << setw(27) << right << "Fish'n Crisp" << setw(27) << right << fixed << setprecision(2) << total4 << endl;
    cout << "-------------------------------------------------------------------------" << endl;

    double total_profit = total1 + total2 + total3 + total4;

    cout << "              The total amount of profit = RM" << total_profit << endl;
if ((total1 > total2) && (total1 > total3) && (total1 > total4)) {
        highest_profit = total1;
    } else if ((total2 > total1) && (total2 > total3) && (total2 > total4)) {
        highest_profit = total2;
    } else if ((total3 > total1) && (total3 > total2) && (total3 > total4)) {
        highest_profit = total3;
    } else if ((total4 > total1) && (total4 > total2) && (total4 > total3)) {
        highest_profit = total4;
    };

    cout << "              Highest profit = RM" << highest_profit << endl;
    cout << "-------------------------------------------------------------------------" << endl;
}


int main() {
    const int MAX_ITEMS = 15;
    Item items[MAX_ITEMS];

    int numItems = MAX_ITEMS;

    readInput(items, numItems);

    determineCost(items, numItems);

    displayOutput(items, numItems);

    displayAnalysis(items, numItems);

    return 0;
}
