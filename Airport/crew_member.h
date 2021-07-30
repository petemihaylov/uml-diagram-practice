#pragma once

#include "person.h"
#include "gender.h"

class CCrewMember : public IPerson
{
public:
    CCrewMember(EGender gender, std::string name, int personal_number) 
        : mGender(gender)
        , mName(name)
        , mPersonalNumber(personal_number)
    {
    }

    ~CCrewMember() {}
    std::string GetName() override
    {
        return mName;
    }

    EGender GetGender() override
    {
        return mGender;
    }

    bool GetPersonalNumber()
    {
        return mPersonalNumber;
    }

private:
    EGender mGender;
    std::string mName;
    int mPersonalNumber;
};