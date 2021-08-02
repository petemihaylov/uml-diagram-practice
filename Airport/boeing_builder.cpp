#include "boeing_builder.h"

void BoeingBuilder::Reset()
{
  mFlight = CFlight();
}
CFlight *BoeingBuilder::GetFlight()
{
  return &mFlight;
}
void BoeingBuilder::SetFlightNumber(int number)
{
  mFlight.SetFlightNumber(number);
}
void BoeingBuilder::SetDepartureAirport(std::string airport)
{
  mFlight.SetDepartureAirport(airport);
}
void BoeingBuilder::SetArrivalAirport(std::string airport)
{
  mFlight.SetArrivalAirport(airport);
}
void BoeingBuilder::SetDepartureTime(std::chrono::system_clock::time_point departure)
{
  mFlight.SetDepartureTime(departure);
}
void BoeingBuilder::SetArrivalTime(std::chrono::system_clock::time_point arrival)
{
  mFlight.SetArrivalTime(arrival);
}
void BoeingBuilder::SetAirplane(IAirplane *airplane)
{
  mFlight.SetAirplane(airplane);
}