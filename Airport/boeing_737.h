#pragma once

#include "airplane.h"

class CBoeing737 : public IAirplane
{
public:
    CBoeing737(int capacity, std::string name)
        : mCapacity(capacity)
        , mName(name)
    {
    }

    ~CBoeing737() {}

    std::string GetName() const override
    {
        return mName;
    }

    int GetCapacity() const override
    {
        return mCapacity;
    }

private:
    int mCapacity;
    std::string mName;
};