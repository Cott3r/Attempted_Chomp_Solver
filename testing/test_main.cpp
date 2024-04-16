//
// Created by cott3r on 16.04.2024.
//
// This program uses the googletest Framework in order to run
// The googletest Framework can be found here: https://github.com/google/googletest
// The googletest Framework Licence is here: ./googletest/LICENSE
//

#include "test_main.h"



int main(int argc, char **argv)
{
  srand(123);


  ::testing::InitGoogleTest(&argc, argv);
  bool result = RUN_ALL_TESTS();


  return result;
}



//File Tests
/*
INSTANTIATE_TEST_SUITE_P(TestPartition1,
                         FileTest,
                         testing::ValuesIn(FileTest::parameter_list_TestPartition1_.begin(),
                                           FileTest::parameter_list_TestPartition1_.end()),
                         [](const testing::TestParamInfo<TestParameter> &info)
                           { return info.param.test_name_; });

INSTANTIATE_TEST_SUITE_P(TestPartition_RAM_1_Simplified,
                         FileTest,
                         testing::ValuesIn(FileTest::parameter_list_TestPartition_RAM_1_Simplified_.begin(),
                                           FileTest::parameter_list_TestPartition_RAM_1_Simplified_.end()),
                         [](const testing::TestParamInfo<TestParameter> &info)
                           { return info.param.test_name_; });

INSTANTIATE_TEST_SUITE_P(TestPartition_RAM_1,
                         FileTest,
                         testing::ValuesIn(FileTest::parameter_list_TestPartition_RAM_1_.begin(),
                                           FileTest::parameter_list_TestPartition_RAM_1_.end()),
                         [](const testing::TestParamInfo<TestParameter> &info)
                           { return info.param.test_name_; });


//Bitflip Tests
INSTANTIATE_TEST_SUITE_P(TestPartition1,
                         BitflipTest,
                         testing::ValuesIn(BitflipTest::parameter_list_TestPartition1_.begin(),
                                           BitflipTest::parameter_list_TestPartition1_.end()),
                         [](const testing::TestParamInfo<TestParameter> &info)
                           { return info.param.test_name_; });

INSTANTIATE_TEST_SUITE_P(TestPartition_RAM_1_Simplified,
                         BitflipTest,
                         testing::ValuesIn(BitflipTest::parameter_list_TestPartition_RAM_1_Simplified_.begin(),
                                           BitflipTest::parameter_list_TestPartition_RAM_1_Simplified_.end()),
                         [](const testing::TestParamInfo<TestParameter> &info)
                           { return info.param.test_name_; });

INSTANTIATE_TEST_SUITE_P(TestPartition_RAM_1,
                         BitflipTest,
                         testing::ValuesIn(BitflipTest::parameter_list_TestPartition_RAM_1_.begin(),
                                           BitflipTest::parameter_list_TestPartition_RAM_1_.end()),
                         [](const testing::TestParamInfo<TestParameter> &info)
                           { return info.param.test_name_; });


//DetectingL2PBitflipTests
INSTANTIATE_TEST_SUITE_P(TestPartition1,
                         DetectingL2PBitflipTest,
                         testing::ValuesIn(DetectingL2PBitflipTest::parameter_list_TestPartition1_.begin(),
                                           DetectingL2PBitflipTest::parameter_list_TestPartition1_.end()),
                         [](const testing::TestParamInfo<TestParameter> &info)
                           { return info.param.test_name_; });

INSTANTIATE_TEST_SUITE_P(TestPartition_RAM_1_Simplified,
                         DetectingL2PBitflipTest,
                         testing::ValuesIn(DetectingL2PBitflipTest::parameter_list_TestPartition_RAM_1_Simplified_.begin(),
                                           DetectingL2PBitflipTest::parameter_list_TestPartition_RAM_1_Simplified_.end()),
                         [](const testing::TestParamInfo<TestParameter> &info)
                           { return info.param.test_name_; });

INSTANTIATE_TEST_SUITE_P(TestPartition_RAM_1,
                         DetectingL2PBitflipTest,
                         testing::ValuesIn(DetectingL2PBitflipTest::parameter_list_TestPartition_RAM_1_.begin(),
                                           DetectingL2PBitflipTest::parameter_list_TestPartition_RAM_1_.end()),
                         [](const testing::TestParamInfo<TestParameter> &info)
                           { return info.param.test_name_; });


//FlushCache Tests
INSTANTIATE_TEST_SUITE_P(TestPartition1,
                         FlushCacheTest,
                         testing::ValuesIn(FlushCacheTest::parameter_list_TestPartition1_.begin(),
                                           FlushCacheTest::parameter_list_TestPartition1_.end()),
                         [](const testing::TestParamInfo<TestParameter> &info)
                           { return info.param.test_name_; });

INSTANTIATE_TEST_SUITE_P(TestPartition_RAM_1_Simplified,
                         FlushCacheTest,
                         testing::ValuesIn(FlushCacheTest::parameter_list_TestPartition_RAM_1_Simplified_.begin(),
                                           FlushCacheTest::parameter_list_TestPartition_RAM_1_Simplified_.end()),
                         [](const testing::TestParamInfo<TestParameter> &info)
                           { return info.param.test_name_; });

INSTANTIATE_TEST_SUITE_P(TestPartition_RAM_1,
                         FlushCacheTest,
                         testing::ValuesIn(FlushCacheTest::parameter_list_TestPartition_RAM_1_.begin(),
                                           FlushCacheTest::parameter_list_TestPartition_RAM_1_.end()),
                         [](const testing::TestParamInfo<TestParameter> &info)
                           { return info.param.test_name_; });
                           */