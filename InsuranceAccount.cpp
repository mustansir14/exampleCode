#include "InsuranceAccount.h"


std::string InsuranceAccount::getInsuranceID() {
        return this->insuranceID;
    }
void InsuranceAccount::setInsuranceID(std::string insuranceID) {
    this->insuranceID = insuranceID;
}


std::string InsuranceAccount::getOwnerName() {
    return this->ownerName;
}
void InsuranceAccount::setOwnerName(std::string ownerName) {
    this->ownerName = ownerName;
}


double InsuranceAccount::getInsuranceBalance() {
    return this->insuranceBalance;
}
void InsuranceAccount::setInsuranceBalance(double insuranceBalance) {
    this->insuranceBalance = insuranceBalance;
}

void InsuranceAccount::makeDeposit(double amount)
{
    this->insuranceBalance += amount;
}