#ifndef class_basicAccount
#define class_basicAccount

#include "InsuranceAccount.h"

class basicAccount : public InsuranceAccount
{
    double insuranceRate;
public:
    basicAccount();
    void setInsuranceRate(double rate);
    double getInsuranceRate();
    
    void claimInsurance();
    void createMonthlyStatement();


};

#endif