#include <QCoreApplication>
#include <gtest/gtest.h>

TEST(TestGroup, test1) {
    ASSERT_TRUE(1 == 1);
}

int main()
{
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
