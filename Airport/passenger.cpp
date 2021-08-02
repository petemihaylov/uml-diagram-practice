#include "passenger.h"
#include "person.h"
#include "gender.h"

CPassenger::CPassenger(EGender gender, std::string name)
    : mGender(gender), mName(name)
{
}
CPassenger::~CPassenger() {}

std::string CPassenger::GetName()
{
  return mName;
}

EGender CPassenger::GetGender()
{
  return mGender;
}

void CPassenger::SetAssistance(bool assistance)
{
  mAssistance = assistance;
}

bool CPassenger::NeedsAssistance()
{
  return mAssistance;
}