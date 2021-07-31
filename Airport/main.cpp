#include <iostream>
#include <map>

#include "flight.h"
#include "boeing_737.h"
#include "passenger.h"
#include "crew_member.h"
#include "gender.h"
#include "person.h"

int main()
{
  // Creating a flight
  CFlight flight{"Flight", 322, "Eindhoven", "Sofia", 1115135860, 1235135860};

  // Setting an airplane
  CBoeing737 airplane{3, "Boeing737"};
  flight.SetAirplane(&airplane);

  // Adding travellers
  flight.AddTraveller(std::make_shared<CPassenger>(EGender(0), "John"));
  flight.AddTraveller(std::make_shared<CPassenger>(EGender(0), "Tom"));
  flight.AddTraveller(std::make_shared<CCrewMember>(EGender(1), "Sarah", 81762534));
  flight.AddTraveller(std::make_shared<CCrewMember>(EGender(1), "Sophie", 67853));

  // Listing travellers
  auto travellers = flight.GetTravellers();

  // Iterating over map and listing the keys
  for (auto &kv : travellers)
  {
    std::cout << kv.first << std::endl;
  }

  return 0;
}
