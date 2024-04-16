//
// Created by cott3r on 16.04.2024.
//
// This program uses the googletest Framework in order to run
// The googletest Framework can be found here: https://github.com/google/googletest
// The googletest Framework Licence is here: ./googletest/LICENSE
//

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <unistd.h>

using namespace std;


// The fixture for testing class PermissionTest.
class ChompTest : public ::testing::Test {

    inline static int counter = 0;
protected:
    ChompTest() {
      // You can do set-up work for each test here.
    }

    ~ChompTest() override {
      // You can do clean-up work that doesn't throw exceptions here.
    }


    // Per-test-suite set-up.
    // Called before the first test in this test suite.
    // Can be omitted if not needed.
    static void SetUpTestSuite() {
      printf("Test SetUpTestSuite");
    }

    // Per-test-suite tear-down.
    // Called after the last test in this test suite.
    // Can be omitted if not needed.
    static void TearDownTestSuite() {
      printf( "Test TearDownTestSuite");
    }

    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:

    void SetUp() override {
      // Code here will be called immediately after the constructor (right
      // before each test).

      printf( "Test SetUp %d", counter++);
    }

    void TearDown() override {
      // Code here will be called immediately after each test (right
      // before the destructor).
      printf( "Test TearDown");
    }

    // Class members declared here can be used by all tests in the test suite
public:
};


//Test the Configuration file
TEST_F(ChompTest, Test_first_test)
{

  printf("First test\n");

  if(false)
    FAIL() << "The configuration is not valid";
}


