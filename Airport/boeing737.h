#pragma once

#include "airplane.h"

class CBoeing737 : public IAirplane
{
public:
  CBoeing737(int capacity, std::string name);

  ~CBoeing737();

  std::string GetName() const override;

  int GetCapacity() const override;

private:
  int mCapacity{0};
  std::string mName{""};
};