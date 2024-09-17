#include "StringCalculator.h"
#include <gtest/gtest.h>
 
//Macro by google
TEST(StringCalculatorTestSuite,add_emptyInputString_ZeroIsExpected){
//Arrange
  string input=" ";
  int expectedValue = 0;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}
TEST(StringCalculator,add_numberZero_ZeroIsExpected){
//Arrange
  string input="0";
  int expectedValue=0;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}
TEST(StringCalculator,add_numberOne_OneIsExpected){
//Arrange
  string input="1";
  int expectedValue=1;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}
TEST(StringCalculator,add_twoCommaDelimitedNumbers_returnTheirSum){
//Arrange
  string input=("1,10");
  int expectedValue=11;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}
TEST(StringCalculator,add_multipleCommaDelimitedNumbers_returnTheirSum){
//Arrange
  string input=("1,10,12,55");
  int expectedValue=78;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}
TEST(StringCalculator,whenDelimitedWithNewlineAndComma_returnTheirSum){
//Arrange
  string input=("1\n,10");
  int expectedValue=11;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}
TEST(StringCalculator,whenDelimiterIsPassed_returnTheirSum){
//Arrange
  string input=("//,1\n,10");
  int expectedValue=11;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}
TEST(StringCalculatorTestSuite,inputstring_negativenumber_invalidargument){
//Arrange
string input = "11,-5,9";
ASSERT_THROW(Add("11,-5,9"),invalid_argument);
}
TEST(StringCalculatorTestSuite, when_passed_numbers_over_1000)
{
  string input = "1,2,1001,3";
  int expectedValue = 1005;
  int actualValue = Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite, when_passed_multicharacter_delimiter)
{
  string input = "//[***]\n8***2***3";
  int expectedValue = 13;
  int actualValue = Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}
TEST(StringCalculatorTestSuite, when_passed_multiple_delimiters)
{
  string input = "//[*][%]\n4*2%3";
  int expectedValue = 9;
  int actualValue = Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite, when_passed_multiple_multicharacter_delimiters)
{
  string input = "//[**][%^]\n4**1%^9";
  int expectedValue = 14;
  int actualValue = Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}
