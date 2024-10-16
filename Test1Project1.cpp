

#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;


int main()
{
    double totalSales;
    double payAdvance;
    double commissionRate;
    double totalCommission;
    double takehomePay;
    
    cout << "-------Pay Result Calculator-------" << endl;
    cout << "Please input total sales amount for this month: " << endl;
    cin >> totalSales; 

    if (totalSales < 10000)
    {
     commissionRate = .05;
    }
     else 
     
        if (totalSales < 14999)
        {
          commissionRate = .10;
        }
        else
        

            if (totalSales < 17999)
            {
               commissionRate = .12;
            }
            else

                if (totalSales < 21999)
                {
                   commissionRate = .14;
                }
                else
                    {
                      commissionRate = .16;
                    }

                      totalCommission = (totalSales * commissionRate);
                      cout << "Please input total pay advance amount for this month: " << endl;
                      cin >> payAdvance;

                      takehomePay = totalCommission - payAdvance;

                      cout << endl;
                      cout << "[ Pay Results ]" << endl;
                      cout << "---------------" << endl;
                      cout << "Total sales for this month: $" << totalSales << endl;
                      cout << "Commission Rate: $" << commissionRate << endl;
                      cout << "Commission Earned: $" << totalCommission << endl;
                      cout << "Advanced Pay: $" << payAdvance << endl;
                      
                      if (takehomePay < 0)
                      {
                          cout << "You Owe: $" << takehomePay << endl;
                      }
                      else
                          cout << "Total Earnings: $" << takehomePay << endl;




}

