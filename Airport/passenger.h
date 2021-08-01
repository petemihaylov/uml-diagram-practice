#pragma once

#include "person.h"
#include "gender.h"

class CPassenger : public IPerson
{
public:
	CPassenger(EGender gender, std::string name);

	~CPassenger();

	std::string GetName() override;

	EGender GetGender() override;

	void SetAssistance(bool assistance);

	bool NeedsAssistance();

private:
	EGender mGender;
	std::string mName;
	bool mAssistance{false};
};