#ifndef class_standardAccount
#define class_standardAccount
#include "InsuranceAccount.h"

class standardAccount : public InsuranceAccount
{
public:
    virtual void ClaimMedical() = 0;
};

#endif