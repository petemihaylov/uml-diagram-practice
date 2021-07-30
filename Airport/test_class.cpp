#include "test_class.h"

namespace testing_namespace
{
  CTestClass::CTestClass(const std::string& name)
    : mName(name)
  {
    std::cout << "Created new class with name " << mName << std::endl; 
  }

  CTestClass::~CTestClass()
  {
    std::cout << "Destructing this instance with name " << mName << std::endl;
  }
}
