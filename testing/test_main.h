//
// Created by astegger-linux on 9/7/23.
//
// This program uses the googletest Framework in order to run
// The googletest Framework can be found here: https://github.com/google/googletest
// The googletest Framework Licence is here: ./googletest/LICENSE
//

#pragma once

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <unistd.h>
#include <iostream>
#include <fstream>
#include "BruteForceSolver.h"


class TestParameter
{
public:
  //To solve the problem of an uninitialized Variable by the google test framework
  //The solution is copied from Leonardo from stackoverflow
  //https://stackoverflow.com/questions/70001436/valgrind-reports-usage-of-uninitialized-values-on-simple-gtest
  //*************************START*************************
  static void *operator new(std::size_t count)
  {
//    std::cout << "custom new for size " << count << '\n';
    void *p = ::operator new(count);
    memset(p, 0, count);
    return p;
  }

  static void *operator new[](std::size_t count)
  {
//    std::cout << "custom new[] for size " << count << '\n';

    void *p = ::operator new[](count);
    memset(p, 0, count);
    return p;
  }
  //*************************END*************************

};

