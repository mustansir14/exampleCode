#include "monthlyDepositAccount.h"

using namespace std;

monthlyDepositAccount::monthlyDepositAccount()
{
    this->medicalInsurance = "Limited";
}

double monthlyDepositAccount::getMonthlyDeposit() {
return this->monthlyDeposit;
}
void monthlyDepositAccount::setMonthlyDeposit(double monthlyDeposit) {
    this->monthlyDeposit = monthlyDeposit;
}


string monthlyDepositAccount::getMedicalInsurance() {
    return this->medicalInsurance;
}
void monthlyDepositAccount::setMedicalInsurance(string medicalInsurance) {
    this->medicalInsurance = medicalInsurance;
}

void monthlyDepositAccount::claimInsurance()
{
    cout << "Insurance Claimed!" << endl;
}
void monthlyDepositAccount::createMonthlyStatement()
{
    cout << "Monthly Statement Created!" << endl;
}

void monthlyDepositAccount::ClaimMedical()
{
    cout << "Medical Insurance Claimed!" << endl;
}