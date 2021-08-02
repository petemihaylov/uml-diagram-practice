#pragma once

#include <iostream>

class IAirplane
{
public:
  IAirplane() {}
  virtual ~IAirplane() {}
  virtual std::string GetName() const = 0;
  virtual int GetCapacity() const = 0;
};
