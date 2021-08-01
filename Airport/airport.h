#pragma once

#include <iostream>

class CAirport
{
public:
  CAirport();

  CAirport(const std::string &name);

  std::string GetName();

private:
  const std::string mName;
};