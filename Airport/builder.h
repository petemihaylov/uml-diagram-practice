#include "flight.h"

class IBuilder
{
public:
  virtual void Reset() = 0;
  virtual CFlight *GetFlight() = 0;
  virtual void SetFlightNumber(int number) = 0;
  virtual void SetDepartureAirport(std::string airport) = 0;
  virtual void SetArrivalAirport(std::string airport) = 0;
  virtual void SetDepartureTime(std::chrono::system_clock::time_point departure) = 0;
  virtual void SetArrivalTime(std::chrono::system_clock::time_point arrival) = 0;
  virtual void SetAirplane(IAirplane *airplane) = 0;
};