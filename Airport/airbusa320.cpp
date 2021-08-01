#include "airbusa320.h"

CAirbusA320::CAirbusA320(int capacity, std::string name)
    : mCapacity(capacity), mName(name)
{
}

CAirbusA320::~CAirbusA320() {}

std::string CAirbusA320::GetName()
{
    return mName;
}

int CAirbusA320::GetCapacity()
{
    return mCapacity;
}