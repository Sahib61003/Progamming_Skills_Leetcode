Count Odd Numbers
This is a simple function that counts the number of odd numbers within a given range.

Inputs
The function takes in two integers as input: low and high. These represent the lower and upper bounds of the range in which we want to count the number of odd numbers.

Output
The function returns a single integer, representing the number of odd numbers within the given range.

Question Given
Given two non-negative integers low and high. Return the count of odd numbers between low and high (inclusive).

Implementation Details
The function first initializes a count variable to 0. It then iterates through the range from low to high, incrementing the count variable each time it encounters an odd number (determined by checking if the number is not divisible by 2). Finally, the function returns the count variable as the result.
