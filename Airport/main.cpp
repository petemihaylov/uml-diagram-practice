#include <iostream>
#include "director.h"
#include "boeing_builder.h"

int main()
{

  Director director{};
  BoeingBuilder builder{};

  director.MakeBoeingFlight(&builder);

  return 0;
}
