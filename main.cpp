#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double ClassACost = 15.00;
    const double ClassBCost = 12.00;
    const double ClassCCost = 9.00;

    int ticketsA, ticketsB, ticketsC;
    double totalA, totalB, totalC, total;

    cout << "How many tickets were sold for Class A" << endl;
    cin >> ticketsA;

    cout << "How many tickets were sold for Class B" << endl;
    cin >> ticketsB;

    cout << "How many tickets were sold for Class C" << endl;
    cin >> ticketsC;

    totalA = ticketsA * ClassACost;
    totalB = ticketsB * ClassBCost;
    totalC = ticketsC * ClassCCost;
    total = totalA + totalB + totalC;

    cout << setprecision(2) << fixed;

    cout << "Tickets sold for Class A " << ticketsA
         << " Sales Price for A " << totalA << endl;

    cout << "Tickets sold for Class B " << ticketsB
         << " Sales Price for B " << totalB << endl;

    cout << "Tickets sold for Class C " << ticketsC
         << " Sales Price for C " << totalC << endl;

    cout << "Total Sales " << total << endl;

    return 0;
}
