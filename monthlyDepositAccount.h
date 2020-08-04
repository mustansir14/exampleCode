#ifndef class_monthlyDepositAccount
#define class_monthlyDepositAccount
#include "standardAccount.h"

class monthlyDepositAccount : public standardAccount
{
    double monthlyDeposit;
    std::string medicalInsurance;

public:
    monthlyDepositAccount();
    
    double getMonthlyDeposit();
    void setMonthlyDeposit(double monthlyDeposit);

    std::string getMedicalInsurance();
    void setMedicalInsurance(std::string medicalInsurance);

    void claimInsurance();
    void createMonthlyStatement();
    void ClaimMedical();


};

#endif