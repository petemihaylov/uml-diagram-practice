#include "flight.h"
#include "person.h"
#include "passenger.h"
#include "crew_member.h"

CFlight::CFlight(const std::string &name,
                 const int &number,
                 const std::string &departureAirportName,
                 const std::string &arrivalAirportName,
                 const time_t &arrivalTime,
                 const time_t &departureTime)
    : mName(name),
      mNumber(number),
      mDepartureAirport(departureAirportName),
      mArrivalAirport(departureAirportName),
      mArrivalTime(arrivalTime),
      mDepartureTime(departureTime)
{
  std::cout << "Created new class with name " << mName << std::endl;
}

int64_t CFlight::GetFlightNumber() const
{
  return mNumber;
}

std::string CFlight::GetFlightName() const
{
  return mName;
}

time_t CFlight::GetDepartureTime() const
{
  return mDepartureTime;
}

time_t CFlight::GetArrivalTime() const
{
  return mArrivalTime;
}

CAirport CFlight::GetDepartureAirport() const
{
  return mDepartureAirport;
}

CAirport CFlight::GetArrivalAirport() const
{
  return mArrivalAirport;
}

void CFlight::SetAirplane(IAirplane *airplane)
{
  mAirplane = airplane;
}

void CFlight::AddTraveller(const std::shared_ptr<IPerson> &traveller)
{
  // Check if that the traveller does not exist already in the map
  if (mTravellers.find(traveller->GetName()) != mTravellers.end())
  {
    std::cout << "Passenger: " << traveller->GetName() << " is already regestered" << std::endl;
    return;
  }

  // Check if the plane has room for the new passeneger
  if (mAirplane->GetCapacity() <= mTravellers.size())
  {
    std::cout << "There is no more room in the plane" << std::endl;
    return;
  }

  // At this point we can safely add the passenger to the flight
  mTravellers[traveller->GetName()] = traveller;
  std::cout << "Added passenger with name: " << traveller->GetName() << std::endl;
}

std::map<std::string, std::shared_ptr<IPerson> > CFlight::GetTravellers() const
{
  return mTravellers;
}

std::string CFlight::GetAirplaneName() const
{
  return mAirplane == nullptr ? "mAirplane not exist yet!" : mAirplane->GetName();
}

CFlight::~CFlight()
{
  std::cout << "Destructing this instance with name " << mName << std::endl;
}
