#include <iostream>
#include "airport.h"

CAirport::CAirport()
{
}

CAirport::CAirport(std::string &name)
    : mName(name)
{
}

std::string CAirport::GetName()
{
  return mName;
}