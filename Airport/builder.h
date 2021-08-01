#pragma once
#include "flight.h"

class IBuilder
{
public:
  IBuilder();
  ~IBuilder();

  void Reset();
  void CreateFlight();
  CFlight GetFlight() const;
  void SetFlightNumber();
  void SetDepartureAirport();
  void SetArrivalAirport();
  void SetDepartureTime();
  void SetArrivalTime();

  void SetAirplane();

private:
  const CFlight mFlight;
};