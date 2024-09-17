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
  string input=0;
  int expectedValue=0;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}
