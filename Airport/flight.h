#pragma once

#include <iostream>
#include <ctime>
#include <map>
#include <string>
#include <chrono>
#include "airplane.h"
#include "airport.h"
#include "person.h"

class CFlight
{
public:
  // Constructor
  CFlight();

  CFlight(std::string &name,
          int &number,
          std::string &departureAirportName,
          std::string &arrivalAirportName,
          std::time_t &arrivalTime,
          std::time_t &departureTime);

  int64_t GetFlightNumber() const;
  std::string GetFlightName() const;
  std::time_t GetDepartureTime() const;
  std::time_t GetArrivalTime() const;
  CAirport GetDepartureAirport() const;
  CAirport GetArrivalAirport() const;
  std::string GetAirplaneName() const;
  std::map<std::string, std::shared_ptr<IPerson> > GetTravellers() const;

  void SetAirplane(IAirplane *airplane);
  void SetFlightName(std::string);
  void SetFlightNumber(int number);
  void SetDepartureAirport(std::string &departureAirport);
  void SetArrivalAirport(std::string &arrivalAirport);
  void SetArrivalTime(std::chrono::system_clock::time_point &arrivalTime);
  void SetDepartureTime(std::chrono::system_clock::time_point &departureTime);

  void AddTraveller(const std::shared_ptr<IPerson> &traveller);

  // Destructor
  ~CFlight();

private:
  std::string mName;
  int mNumber;
  std::time_t mArrivalTime;
  std::time_t mDepartureTime;
  CAirport mDepartureAirport;
  CAirport mArrivalAirport;
  std::map<std::string, std::shared_ptr<IPerson> > mTravellers{};

  IAirplane *mAirplane{nullptr};
};