#include "gender.h"
#include "crew_member.h"

CCrewMember::CCrewMember(EGender gender, std::string name, int personal_number)
    : mGender(gender), mName(name), mPersonalNumber(personal_number)
{
}

CCrewMember::~CCrewMember() {}

std::string CCrewMember::GetName()
{
  return mName;
}

EGender CCrewMember::GetGender()
{
  return mGender;
}

bool CCrewMember::GetPersonalNumber()
{
  return mPersonalNumber;
}