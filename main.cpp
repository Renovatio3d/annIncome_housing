//AUTHOR: Shallu J Nah
// PROGRAM DESCRIPTION: The program  compute the rent for an apartment in a low-income
// housing unit, base on the annual income of the family, and the type of unit desired

#include <iostream>            // for I/O, such ASCII
#include <iomanip>            //  for formatting output
#include <cmath>             //   for using pow/abs, such math functions
#include <cctype>           //    Character handling functions, if any.

using namespace std;

const double MEDIAN_INCOME = 58760;
const double ANNINCOME_LIMIT1 = 10000;
const double ANNINCOME_LIMIT2 = 15000;
const double ANNINCOME_LIMIT3 = 20000;
const double ANNINCOME_LIMIT4 = 25000;
const int ANNINCOME_LIMIT5_MEDPrecent = 60;
double MEDIAN_INCOME_PRECENT;
const double TWOBED_Rate1 = 555;
const double TWOBED_Rate2 = 665;
const double TWOBED_Rate3 = 825;
const double ONEBED_Rate1 = 499;
const double ONEBED_Rate2 = 599;
const double ONEBED_Rate3 = 755;
const double ONE_TWO_BED_Rate1 = 2.5;
const double ONE_TWO_BED_Rate2 = 3;
const double PRECENT = 100;

double  AnnIncomeRates(double houseAnnIncome, int numBedrooms);

int main() {
    double houseAnnIncome;
    int numBedrooms;
    const int MONTHS = 12;
    // variables to Hold Output Values
    double monthRate;
    double annCost;
    //Read input from user
    cout << " Rent Calculation Program for Low-Income Housing" << endl << endl;
    cout << " Enter the household annual income: ";
    cin >> houseAnnIncome;
    cout << endl;
    //houseAnnIncome > 60 % MEDIAN_INCOME
    //houseAnnIncome > MEDIAN_INCOME / 60%
    MEDIAN_INCOME_PRECENT = MEDIAN_INCOME * ANNINCOME_LIMIT5_MEDPrecent / PRECENT;
    if (houseAnnIncome >= MEDIAN_INCOME_PRECENT) {
        cout << " Income too high for low-income housing" << endl << endl;
        return 0;
    }
    if (houseAnnIncome >= ANNINCOME_LIMIT2 && houseAnnIncome < MEDIAN_INCOME_PRECENT) {
        cout << " Unit type: How many bedrooms (1 or 2)? ";
        cin >> numBedrooms;
        cout << endl;
    }
    if (houseAnnIncome < ANNINCOME_LIMIT2)
        // Output
        cout << " Rental Costs " << endl << endl;
    // setprecision output manipulators scientific  values rounded  two decimal places
    cout << fixed << setprecision(2);
    cout << setw(10) << " Annual Income:" << setw(14) << houseAnnIncome << endl;
    cout << setw(10) << " Monthly Rate:" << setw(15) << monthRate << endl;
    cout << setw(10) << " Annual Cost:" << setw(16) << annCost << endl << endl;


    return 0;

}
// Description:  The function determine annual home rates and cost of the type of unit desired to return.
// Input parameter:  Take in two input parameter,  The annual income and if qualify the number of bed rooms up to two
// Returns: The monthly rate fee, if successful
double  AnnIncomeRates(double houseAnnIncome, int numBedrooms) {


}