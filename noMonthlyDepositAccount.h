#ifndef class_noMonthlyDepositAccount
#define class_noMonthlyDepositAccount

#include "standardAccount.h"

class noMonthlyDepositAccount : public standardAccount
{
    double minimumInitialDeposit;
    double MedicalAllowance;

    
public:
    noMonthlyDepositAccount();
    noMonthlyDepositAccount(double deposit);

    double getMinimumInitialDeposit();
    void setMinimumInitialDeposit(double minimumInitialDeposit);


    double getMedicalAllowance();
    void setMedicalAllowance(double MedicalAllowance);

    void claimInsurance();
    void createMonthlyStatement();
    void ClaimMedical();

};

#endif