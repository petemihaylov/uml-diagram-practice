
#include "boeing737.h"

CBoeing737::CBoeing737(int capacity, std::string name)
    : mCapacity(capacity), mName(name)
{
}

CBoeing737::~CBoeing737() {}

std::string CBoeing737::GetName() const
{
  return mName;
}

int CBoeing737::GetCapacity() const
{
  return mCapacity;
}