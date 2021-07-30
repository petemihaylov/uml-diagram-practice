#pragma once

#include "airplane.h"

class CAirbusA320 : public IAirplane
{
public:
  CAirbusA320(int capacity, std::string name) 
    : mCapacity(capacity)
    , mName(name) 
  {
  }

  ~CAirbusA320() {}

  std::string GetName()
  {
    return mName;
  }

  int GetCapacity()
  {
    return mCapacity;
  }

private:
  int mCapacity;
  std::string mName;
};