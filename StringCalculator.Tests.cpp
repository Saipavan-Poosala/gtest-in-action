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
  string input1=input();
  string input2=input();
  int expectedValue=int(input1)+int(input2);
//Act
  int actualValue=Add(input1,input2);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}
