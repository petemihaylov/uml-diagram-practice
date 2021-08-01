#include <iostream>
#include <map>
#include <chrono>
#include <ctime>

#include "flight.h"
#include "boeing737.h"
#include "passenger.h"
#include "crew_member.h"
#include "gender.h"
#include "person.h"

int main()
{
  // Creating a flight

  std::string departureAirport = "Eindhoven";
  std::string arrivalAirport = "Sofia";

  CFlight flight = CFlight();
  flight.SetFlightName("Flight 101");
  flight.SetFlightNumber(444);

  flight.SetDepartureAirport(departureAirport);
  flight.SetArrivalAirport(arrivalAirport);

  auto departureTime = std::chrono::system_clock::now();
  flight.SetDepartureTime(departureTime);
  auto arrivalTime = std::chrono::system_clock::now() + std::chrono::hours(4);
  flight.SetArrivalTime(arrivalTime);

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

  const auto departure_t = flight.GetDepartureTime();
  std::cout << "Departure time: " << std::ctime(&departure_t);

  const auto arrival_t = flight.GetArrivalTime();
  std::cout << "Arriving time: " << std::ctime(&arrival_t);

  return 0;
}
