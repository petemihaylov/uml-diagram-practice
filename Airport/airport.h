#pragma once

#include <iostream>

class CAirport
{
public:
    CAirport() {}

    CAirport(const std::string& name) 
        : mName(name)
    {
    }

    std::string GetName()
    {
        return mName;
    }

private:
    const std::string mName;
};