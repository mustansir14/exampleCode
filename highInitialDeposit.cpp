#include "highInitialDeposit.h"

using namespace std;

highInitialDeposit::highInitialDeposit(double deposit)
{
    this->setMinimumInitialDeposit(10000);
    if(deposit >= this->getMinimumInitialDeposit())
    {
        this->setInsuranceBalance(deposit);
    }
    else
    {
        cout << "Minimum deposit amount is 10000" << endl;
    }
    

}