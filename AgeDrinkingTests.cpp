#include <gtest/gtest.h>

extern "C"
{
    #include "drinking_restriction.h"
}

class AgeDrinkingTest : public testing::Test
{
    protected:
        void SetUp() override
        {
            /* Without this the Tests could break */
        }

};

TEST_F(AgeDrinkingTest, WhenAlcoholContentExceedsOneShouldReturnErrorCantBuyAlcohol)
{
    // ARRANGE
    char location = 'l';
    int age = 26;
    float alcohol_level = 0.7;
    // ACT
    // ASSERT
    ASSERT_EQ(canIBuyBeer(location, age, alcohol_level), ALCOHOL_ACCESS);
}