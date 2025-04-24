#include <gtest/gtest.h>

TEST(TestSuite_3, TestName_1) {
    EXPECT_EQ(3, 3);
}

TEST(TestSuite_3, TestName_2) {
    EXPECT_EQ(3, 3);
} 

TEST(TestSuite_3,TestName_3){
    FAIL() << "EXPECTED FAILURE";
}

TEST(TestSuite_3,TestName_4){
    // FAIL();
     SUCCEED();
}