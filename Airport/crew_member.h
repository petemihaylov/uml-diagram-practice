#pragma once

#include "person.h"
#include "gender.h"

class CCrewMember : public IPerson
{
public:
    CCrewMember(EGender gender, std::string name, int personal_number);

    ~CCrewMember();
    std::string GetName() override;

    EGender GetGender() override;

    bool GetPersonalNumber();

private:
    EGender mGender;
    std::string mName;
    int mPersonalNumber;
};