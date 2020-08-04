#include "premiumAccount.h"

using namespace std;

int premiumAccount::getNumberOfInsuranceMaturityMonths() {
	return this->numberOfInsuranceMaturityMonths;
}
void premiumAccount::setNumberOfInsuranceMaturityMonths(int numberOfInsuranceMaturityMonths) {
	this->numberOfInsuranceMaturityMonths = numberOfInsuranceMaturityMonths;
}


double premiumAccount::getInsuranceRate() {
    return this->insuranceRate;
}
void premiumAccount::setInsuranceRate(double insuranceRate) {
    this->insuranceRate = insuranceRate;
}


std::string premiumAccount::getCurrentInsuranceMonth() {
    return this->currentInsuranceMonth;
}
void premiumAccount::setCurrentInsuranceMonth(std::string currentInsuranceMonth) {
    this->currentInsuranceMonth = currentInsuranceMonth;
}

void premiumAccount::claimInsurance()
{
    cout << "Insurance Claimed!" << endl;
}

void premiumAccount::createMonthlyStatement()
{
    cout << "Monthly Statement Created" << endl;
}