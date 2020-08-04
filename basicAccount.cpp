#include "basicAccount.h"

using namespace std;

basicAccount::basicAccount()
{
    this->insuranceRate = 0.2;
}

void basicAccount::setInsuranceRate(double rate)
{
    this->insuranceRate = rate;
}

double basicAccount::getInsuranceRate()
{
    return insuranceRate;
}

void basicAccount::claimInsurance()
{
    cout << "Insurance Claimed!" << endl;
}

void basicAccount::createMonthlyStatement()
{
    cout << "Monthly Statement Created!" << endl; 
}