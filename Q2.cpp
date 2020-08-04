#include <iostream>

#include "InsuranceAccount.h"
#include "standardAccount.h"
#include "monthlyDepositAccount.h"
#include "noMonthlyDepositAccount.h"
#include "highInitialDeposit.h"
#include "basicAccount.h"
#include "minimumDepositAccount.h"
#include "premiumAccount.h"

using namespace std;

int main()
{
    monthlyDepositAccount m;
    noMonthlyDepositAccount n;
    highInitialDeposit h(10000);
    basicAccount b;
    minimumDepositAccount mi;
    premiumAccount p;

    m.setOwnerName("Mustansir Muzaffar");
    n.setOwnerName("Mustansir Muzaffar");
    h.setOwnerName("Mustansir Muzaffar");
    b.setOwnerName("Mustansir Muzaffar");
    mi.setOwnerName("Mustansir Muzaffar");
    p.setOwnerName("Mustansir Muzaffar");

    m.setMonthlyDeposit(5000);
    n.setMinimumInitialDeposit(3000);
    b.setInsuranceRate(0.3);
    mi.setInsuranceRate(0.5);
    p.setNumberOfInsuranceMaturityMonths(6);
    p.setCurrentInsuranceMonth("June");

    cout << "Monthly Deposit Account" << endl;
    cout << "Name: " << m.getOwnerName() << endl;
    cout << "Monthly Deposit: " << m.getMonthlyDeposit() << endl<< endl;

    cout << "No Monthly Deposit Account" << endl;
    cout << "Name: " << n.getOwnerName() << endl;
    cout << "Minimum Inital Deposit: " << n.getMinimumInitialDeposit() << endl<< endl;

    cout << "High Initial Deposit Account" << endl;
    cout << "Name: " << h.getOwnerName() << endl;
    cout << "Minimum Initial Deposit: " << h.getMinimumInitialDeposit() << endl<< endl;

    cout << "Basic Account" << endl;
    cout << "Name: " << b.getOwnerName() << endl;
    cout << "Insurance Rate: " << b.getInsuranceRate() << endl<< endl;

    cout << "Minimum Deposit Account" << endl;
    cout << "Name: " << mi.getOwnerName() << endl;
    cout << "Insurance Rate: " << mi.getInsuranceRate() << endl<< endl;

    cout << "Premium Account" << endl;
    cout << "Name: " << p.getOwnerName() << endl;
    cout << "Number of Insurance Maturity Months : " << p.getNumberOfInsuranceMaturityMonths() << endl;
    cout << "Current Insurance Month: " << p.getCurrentInsuranceMonth() << endl;
}
