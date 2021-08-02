#include "flight.h"
#include "person.h"
#include "passenger.h"
#include "crew_member.h"

CFlight::CFlight(std::string &name,
                 int &number,
                 std::string &departureAirportName,
                 std::string &arrivalAirportName,
                 std::time_t &arrivalTime,
                 std::time_t &departureTime)
    : mName(name),
      mNumber(number),
      mDepartureAirport(departureAirportName),
      mArrivalAirport(departureAirportName),
      mArrivalTime(arrivalTime),
      mDepartureTime(departureTime)
{
  std::cout << "\nCreated new class with name " << mName << std::endl;
}

CFlight::CFlight()
{
  std::cout << "\nCreated new class CFlight " << std::endl;
}

int64_t CFlight::GetFlightNumber() const
{
  return mNumber;
}

std::string CFlight::GetFlightName() const
{
  return mName;
}

std::time_t CFlight::GetDepartureTime() const
{
  return mDepartureTime;
}

std::time_t CFlight::GetArrivalTime() const
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
  std::cout << "Destructing the CFlight instance " << std::endl;
}

void CFlight::SetFlightName(std::string name)
{
  mName = name;
}

void CFlight::SetFlightNumber(int number)
{
  mNumber = number;
}

void CFlight::SetDepartureAirport(std::string &departureAirport)
{
  mDepartureAirport = CAirport(departureAirport);
}
void CFlight::SetArrivalAirport(std::string &arrivalAirport)
{
  mArrivalAirport = CAirport(arrivalAirport);
}
void CFlight::SetArrivalTime(std::chrono::system_clock::time_point &arrivalTime)
{
  mArrivalTime = std::chrono::system_clock::to_time_t(arrivalTime);
}
void CFlight::SetDepartureTime(std::chrono::system_clock::time_point &departureTime)
{
  mDepartureTime = std::chrono::system_clock::to_time_t(departureTime);
}
