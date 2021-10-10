//PROJECT CODEWARS 1
/*
Description
We need a function that can transform a string into a number. What ways of achieving this do you know?
Note: Don't worry, all inputs will be strings, and every string is a perfectly valid representation of an integral number.
string_to_number("1234")  == 1234
string_to_number("605")   == 605
string_to_number("1405")  == 1405
string_to_number("-7")    == -7
*/

#include<stdio.h>
#include <stdlib.h>

int string_to_number(const char *src) {
  int x = atoi(src);
  return x;
}


/* Adapted from tests originally written by a code warrior bkaes */
/*
#include <criterion/criterion.h>
int string_to_number(const char *src);
Test(ExampleTests, ShouldPassAllTheTestsProvided) {
  cr_assert_eq(string_to_number("1234"), 1234);
  cr_assert_eq(string_to_number("605"), 605);
  cr_assert_eq(string_to_number("1405"), 1405);
  cr_assert_eq(string_to_number("-7"), -7);
}
*/