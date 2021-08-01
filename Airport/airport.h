#pragma once

#include <iostream>

class CAirport
{
public:
  CAirport();

  CAirport(std::string &name);

  std::string GetName();

private:
  std::string mName;
};