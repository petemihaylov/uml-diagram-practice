#pragma once

#include "airplane.h"

class CAirbusA320 : public IAirplane
{
public:
  CAirbusA320(int capacity, std::string name);

  ~CAirbusA320();

  std::string GetName();

  int GetCapacity();

private:
  int mCapacity;
  std::string mName;
};