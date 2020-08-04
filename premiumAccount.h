#ifndef class_premiumAccount
#define class_premiumAccount

#include "InsuranceAccount.h"

class premiumAccount : public InsuranceAccount
{
    int numberOfInsuranceMaturityMonths;
    double insuranceRate;
    std::string currentInsuranceMonth;

public:
    int getNumberOfInsuranceMaturityMonths();
    void setNumberOfInsuranceMaturityMonths(int numberOfInsuranceMaturityMonths);


    double getInsuranceRate();
    void setInsuranceRate(double insuranceRate);


    std::string getCurrentInsuranceMonth();
    void setCurrentInsuranceMonth(std::string currentInsuranceMonth);

    void claimInsurance();

    void createMonthlyStatement();
};

#endif