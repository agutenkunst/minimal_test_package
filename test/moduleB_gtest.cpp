#include "minimal_test_package/moduleB.h"
#include <gtest/gtest.h>

TEST(TheUnittest, simpleTestCase){
  EXPECT_TRUE(ModuleB::return_true());
}

int main(int argc, char **argv){
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}