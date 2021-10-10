/*Consider an array/list of sheep where some sheep may be missing from their place. We need a function that counts the number of sheep present in the array (true means present).
For example,
{ true,  true,  true,  false,
  true,  true,  true,  true,
  true,  false, true,  false,
  true,  false, false, true,
  true,  true,  true,  true,
  false, false, true,  true }
The correct answer would be 17.
Hint: Don't forget to check for bad values like null/undefined
*/

#include <stdbool.h>
#include <stddef.h>

size_t count_sheep(const bool *sheep, size_t count){
  int counter=0;
    for(int i=0; i<count; i++)
     {  
       if(sheep[i]==true){ 
         counter=counter+1; } 
     }
    return counter;
};

/*
#include <criterion/criterion.h>
#include <stdbool.h>
#include <stddef.h>
size_t count_sheep(const bool* sheep, size_t count);
Test(ExampleTests, ShouldPassAllTheTestsProvided) {
  {
    const bool sheep[] = {
      true,  true,  true,  false,
      true,  true,  true,  true,
      true,  false, true,  false,
      true,  false, false, true,
      true,  true,  true,  true,
      false, false, true,  true
    };
    const size_t received = count_sheep(sheep, sizeof(sheep)/sizeof(sheep[0]));
    const size_t expected = 17;
    cr_assert_eq(expected, received, "Expected: %zd Received: %zd", expected, received);
  }
}
*/