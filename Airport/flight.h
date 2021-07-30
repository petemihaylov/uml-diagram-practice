#pragma once

#include <iostream>
#include <ctime>
#include <map>
#include <string>
#include "airplane.h"
#include "airport.h"
#include "person.h"

class CFlight
{
public:
  // Constructor
  CFlight(const std::string &name,
          const int &number,
          const std::string &departureAirport,
          const std::string &arrivalAirport,
          const time_t &arrivalTime,
          const time_t &departureTime);

  int64_t GetFlightNumber() const;
  std::string GetFlightName() const;
  time_t GetDepartureTime() const;
  time_t GetArrivalTime() const;
  CAirport GetDepartureAirport() const;
  CAirport GetArrivalAirport() const;
  std::string GetAirplaneName() const;
  std::map<std::string, std::shared_ptr<IPerson> > GetTravellers() const;

  void SetAirplane(IAirplane *airplane);
  void AddTraveller(const std::shared_ptr<IPerson> &traveller);

  // Destructor
  ~CFlight();

private:
  const std::string mName;
  const int mNumber;
  const time_t mArrivalTime;
  const time_t mDepartureTime;
  const CAirport mDepartureAirport;
  const CAirport mArrivalAirport;
  std::map<std::string, std::shared_ptr<IPerson> > mTravellers{};

  IAirplane *mAirplane{nullptr};
};