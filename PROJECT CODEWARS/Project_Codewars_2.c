#include <stdbool.h>
#include <math.h>

bool is_square(int n) {
    if (n >= 0) {
 
        long long sr = sqrt(n);
        if(sr * sr == n){
          return true;
        }
    }
    return false;
}
/*
#include <criterion/criterion.h>
#include <stdbool.h>
bool is_square(int n);
Test(Sample_Tests, should_work_for_some_examples) {
    cr_assert_eq(is_square(-1), false, "-1: Negative numbers cannot be square numbers");
    cr_assert_eq(is_square( 0),  true,  "0 is a square number");
    cr_assert_eq(is_square( 3), false,  "3 is not a square number");
    cr_assert_eq(is_square( 4),  true,  "4 is a square number");
    cr_assert_eq(is_square(25),  true, "25 is a square number");
    cr_assert_eq(is_square(26), false, "26 is not a square number");
}
*/