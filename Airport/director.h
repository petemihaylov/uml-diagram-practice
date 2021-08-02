#pragma once

#include <map>
#include <chrono>

#include <ctime>

#include "boeing_builder.h"
#include "passenger.h"
#include "crew_member.h"

class Director
{
public:
  Director() {}

  void MakeBoeingFlight(IBuilder *builder)
  {

    builder->SetFlightNumber(12345);

    auto departureTime = std::chrono::system_clock::now();
    builder->SetDepartureTime(departureTime);

    auto arrivalTime = std::chrono::system_clock::now() + std::chrono::hours(4);
    builder->SetArrivalTime(arrivalTime);

    builder->SetDepartureAirport("Sofia, BG");
    builder->SetArrivalAirport("Eindhoven, NL");

    auto capacity = 345;
    CBoeing737 airplane{capacity, "Boeing737"};
    builder->SetAirplane(&airplane);

    auto flight = builder->GetFlight();

    // Adding travellers
    flight->AddTraveller(std::make_shared<CPassenger>(EGender(0), "John"));
    flight->AddTraveller(std::make_shared<CPassenger>(EGender(0), "Tom"));
    flight->AddTraveller(std::make_shared<CCrewMember>(EGender(1), "Sarah", 8134));

    // Listing travellers
    auto travellers = flight->GetTravellers();

    const auto departure_t = flight->GetDepartureTime();
    std::cout << "Departure time: " << std::ctime(&departure_t);

    const auto arrival_t = flight->GetArrivalTime();
    std::cout << "Arriving time: " << std::ctime(&arrival_t);
  }
};
