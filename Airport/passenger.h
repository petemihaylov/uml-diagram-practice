#pragma once

#include "person.h"
#include "gender.h"

class CPassenger : public IPerson
{
public:
	CPassenger(EGender gender, std::string name) 
		: mGender(gender)
		, mName(name)
	{
	}

	~CPassenger() {}

	std::string GetName() override
	{
		return mName;
	}

	EGender GetGender() override
	{
			return mGender;
	}

	void SetAssistance(bool assistance)
	{
			mAssistance = assistance;
	}

	bool NeedsAssistance()
	{
			return mAssistance;
	}

private:
	EGender mGender;
	std::string mName;
	bool mAssistance{false};
};