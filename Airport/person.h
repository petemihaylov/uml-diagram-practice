#pragma once

#include <iostream>
#include "gender.h"

class IPerson
{
public:
    virtual std::string GetName() = 0;
    virtual EGender GetGender() = 0;
};
