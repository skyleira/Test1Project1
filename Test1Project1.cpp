

#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;


int main()
{
    double totalSales;
    double commissionRate;
    double payAdvance;
    double totalCommission;
    double takehomePay;
    
    cout << "-------Pay Result Calculator-------" << endl;
    cout << "Please input total sales amount for this month: " << endl;
    cin >> totalSales; 
        if (totalSales < 10000)
            commissionRate = .05;
        if (totalSales < 14999)
            commissionRate = .10;
        if (totalSales < 17999)
            commissionRate = .12;
        if (totalSales < 21999)
            commissionRate = .14;
        if (totalSales > 22000)
            commissionRate = .16;
    
    
    totalCommission = totalSales * commissionRate;

    cout << "Please input total pay advance amount for this month: " << endl;
    cin >> payAdvance;

    takehomePay = totalCommission - payAdvance;

    cout << endl;
    cout << "[ Pay Results ]" << endl;
    cout << "---------------" << endl;
    cout << "Total sales for this month: " << totalSales << endl;
    cout << "Commission Rate: " << commissionRate << endl;
    cout << "Commission Earned: " << totalCommission << endl;
    cout << "Advanced Pay: " << payAdvance << endl;






}

