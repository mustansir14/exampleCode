#include "noMonthlyDepositAccount.h"
#include <iostream>

using namespace std;

noMonthlyDepositAccount::noMonthlyDepositAccount() {}

noMonthlyDepositAccount::noMonthlyDepositAccount(double deposit)
{
    this->minimumInitialDeposit = 5000;
    if(deposit >= minimumInitialDeposit)
    {
        this->setInsuranceBalance(deposit);
    }
    else
    {
        cout << "Minimum Deposit Amount is 5000" << endl;
    }
    
}

double noMonthlyDepositAccount::getMinimumInitialDeposit() {
return this->minimumInitialDeposit;
}
void noMonthlyDepositAccount::setMinimumInitialDeposit(double minimumInitialDeposit) {
    this->minimumInitialDeposit = minimumInitialDeposit;
}


double noMonthlyDepositAccount::getMedicalAllowance() {
    return this->MedicalAllowance;
}
void noMonthlyDepositAccount::setMedicalAllowance(double MedicalAllowance) {
    this->MedicalAllowance = MedicalAllowance;
}

void noMonthlyDepositAccount::claimInsurance()
{
    cout << "Insurance Claimed!" << endl;
}

void noMonthlyDepositAccount::createMonthlyStatement()
{
    cout << "Monthly Statement Created!" << endl;
}

void noMonthlyDepositAccount::ClaimMedical()
{
    cout << "Medical Insurance Claimed!" << endl;
}