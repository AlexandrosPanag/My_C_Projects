/*
Given a list of integers, determine whether the sum of its elements is odd or even.
Give your answer as a string matching "odd" or "even".
If the input array is empty consider it as: [0] (array with a zero).
Examples:
Input: [0]
Output: "even"
Input: [0, 1, 4]
Output: "odd"
Input: [0, -1, -5]
Output: "even"
*/

#include <stddef.h>

const char *odd_or_even(const int *v, size_t sz) {
    size_t sum = 0;
    for(size_t i=0; i<sz; i++) {
        sum += v[i];
    }
    return sum % 2 ? "odd" : "even";
}

/*
#include <criterion/criterion.h>
#include <stddef.h>
const char *odd_or_even(const int *, size_t);
Test(Sample_Tests, Tests) {
  cr_assert_str_eq(odd_or_even((int[]){0}, 1), "even");
  cr_assert_str_eq(odd_or_even((int[]){1}, 1), "odd");
  cr_assert_str_eq(odd_or_even((int[]){}, 0), "even");
  cr_assert_str_eq(odd_or_even((int[]){0, 1, 5}, 3), "even");
  cr_assert_str_eq(odd_or_even((int[]){0, 1, 3}, 3), "even");
  cr_assert_str_eq(odd_or_even((int[]){1023, 1, 2}, 3), "even");
  cr_assert_str_eq(odd_or_even((int[]){0, -1, -5}, 3), "even");
  cr_assert_str_eq(odd_or_even((int[]){0, -1, -3}, 3), "even");
  cr_assert_str_eq(odd_or_even((int[]){-1023, 1, -2}, 3), "even");
  cr_assert_str_eq(odd_or_even((int[]){0, 1, 2}, 3), "odd");
  cr_assert_str_eq(odd_or_even((int[]){0, 1, 4}, 3), "odd");
  cr_assert_str_eq(odd_or_even((int[]){1023, 1, 3}, 3), "odd");
  cr_assert_str_eq(odd_or_even((int[]){0, -1, 2}, 3), "odd");
  cr_assert_str_eq(odd_or_even((int[]){0, 1, -4}, 3), "odd");
  cr_assert_str_eq(odd_or_even((int[]){-1023, -1, 3}, 3), "odd");
}
*/