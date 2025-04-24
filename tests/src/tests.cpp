#include <gtest/gtest.h>

TEST(TestSuite_1, TestName_1) {
    EXPECT_EQ(3, 3);
}

TEST(TestSuite_1, TestName_2) {
    EXPECT_EQ(3, 3);
} 

TEST(TestSuite_2,TestName_3){
    FAIL();
}

TEST(TestSuite_2,TestName_4){
    // FAIL();
     SUCCEED();
}