# C-Project-Codewars



![](https://th.bing.com/th/id/OIP.uj9ESLEKlmt8TzfjUb1q_gHaHt?pid=ImgDet&rs=1)

#include<stdio.h>

int main(){
printf("https://www.codewars.com/users/AlexandrosPanag");
}

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
PROJECT CODEWARS 1 - Description.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
We need a function that can transform a string into a number. What ways of achieving this do you know?

Note: Don't worry, all inputs will be strings, and every string is a perfectly valid representation of an integral number.

string_to_number("1234")  == 1234
string_to_number("605")   == 605
string_to_number("1405")  == 1405
string_to_number("-7")    == -7

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
PROJECT CODEWARS 2 - Description.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
A square of squares
You like building blocks. You especially like building blocks that are squares. And what you even like more, is to arrange them into a square of square building blocks!

However, sometimes, you can't arrange them into a square. Instead, you end up with an ordinary rectangle! Those blasted things! If you just had a way to know, whether you're currently working in vain… Wait! That's it! You just have to check if your number of building blocks is a perfect square.

Task
Given an integral number, determine if it's a square number:

In mathematics, a square number or perfect square is an integer that is the square of an integer; in other words, it is the product of some integer with itself.

The tests will always use some integral number, so don't worry about that in dynamic typed languages.

Examples
-1  =>  false
 0  =>  true
 3  =>  false
 4  =>  true
25  =>  true
26  =>  false
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
PROJECT CODEWARS 3 - Description.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
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

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
PROJECT CODEWARS 4 - Description.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Consider an array/list of sheep where some sheep may be missing from their place. We need a function that counts the number of sheep present in the array (true means present).

For example,

{ true,  true,  true,  false,
  true,  true,  true,  true,
  true,  false, true,  false,
  true,  false, false, true,
  true,  true,  true,  true,
  false, false, true,  true }
The correct answer would be 17.

Hint: Don't forget to check for bad values like null/undefined

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
PROJECT CODEWARS 5 - Description.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Write a program that finds the summation of every number from 1 to num. The number will always be a positive integer greater than 0.

For example:

summation(2) -> 3
1 + 2

summation(8) -> 36
1 + 2 + 3 + 4 + 5 + 6 + 7 + 8

