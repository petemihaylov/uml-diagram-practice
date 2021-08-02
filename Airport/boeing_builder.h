#pragma once

#include "builder.h"
#include "boeing737.h"
#include "flight.h"

class BoeingBuilder : public IBuilder
{
public:
  void Reset() override;
  CFlight *GetFlight() override;
  void SetFlightNumber(int number) override;
  void SetDepartureAirport(std::string airport) override;
  void SetArrivalAirport(std::string airport) override;
  void SetDepartureTime(std::chrono::system_clock::time_point departure) override;
  void SetArrivalTime(std::chrono::system_clock::time_point arrival) override;
  void SetAirplane(IAirplane *airplane) override;

private:
  CFlight mFlight{};
};