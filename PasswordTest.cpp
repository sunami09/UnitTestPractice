/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, password_with_special_characters)
{
	Password my_password;
	int actual = my_password.count_leading_characters("$$$Password");
	ASSERT_EQ(12, actual);
}

TEST(PasswordTest, password_with_mixed_characters)
{
	Password my_password;
	int actual = my_password.count_leading_characters("1a2b3c");
	ASSERT_EQ(6, actual);
}