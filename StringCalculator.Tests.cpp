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
