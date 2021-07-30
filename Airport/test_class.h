#pragma once

#include <string>
#include <iostream>

namespace testing_namespace
{
  class CTestClass
  {
    public:
      // Constructor
      CTestClass(const std::string& name);

      // Destructor
      ~CTestClass();

    private:
      const std::string mName{"default name"};
  };

  class ITestInterface
  {
    public:
      virtual std::string GetName() = 0;
      virtual uint8_t GetId() = 0;
  }
} // namespace testing_namespace
