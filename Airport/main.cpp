#include <iostream>

#include "test_class.h"

namespace testing_namespace
{
  int main()
  {
    {
      CTestClass testClass;
      testClass = CTestClass("Valeri");

      CTestClass testClass2{"Pepi"};

      auto testClass3 = CTestClass("Koko");
    }

    std::cout << "Out of scope" << std::endl;

    return 0;
  }
}
