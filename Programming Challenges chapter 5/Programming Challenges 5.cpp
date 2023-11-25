#include <iostream>
using namespace std;

int main() 
{
    const double initialFee = 2500;
    const double increaseRate = 0.04;
    cout << "Year\tProjected rates\n";
    double membershipfee = initialFee;


    for (int year = 1; year <= 6; ++year) 
    {
        membershipfee += membershipfee * increaseRate;
        cout << year << "\t$" << membershipfee << endl;
    }

    return 0;
}