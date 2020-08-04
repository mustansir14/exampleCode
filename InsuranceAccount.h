#ifndef class_InsuranceAccount
#define class_InsuranceAccount

#include <iostream>

class InsuranceAccount
{
    std::string insuranceID;
    std::string ownerName;
    double insuranceBalance;

public:
    std::string getInsuranceID();
    void setInsuranceID(std::string insuranceID);


    std::string getOwnerName();
    void setOwnerName(std::string ownerName);


    double getInsuranceBalance();
    void setInsuranceBalance(double insuranceBalance);

    void makeDeposit(double amount);

    virtual void claimInsurance() = 0;

    virtual void createMonthlyStatement() = 0;

};

#endif