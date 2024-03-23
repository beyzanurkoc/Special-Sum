# Special-Sum
Create a C program that allows the user to input two 3-digit numbers. The program should then add the digits of the two numbers separately in each place (ones, tens, and hundreds). If the sum of any place's digits exceeds 9 and results in a two-digit number, those digits should be added together again to obtain a single-digit number. Finally, the program should output the resulting three-digit numbers formed by the sum of the digits in each place.

For example, 345 + 678 

1. First, we separate the digits of both numbers and sum them individually:

For the first number: a=3
, b=4
, c=5
For the second number: d=6
, e=7
, f=8
2. Next, we add each digit:

 a + d = 3 + 6 = 9,
 b + e = 4 + 7 = 11. Since it's greater than 10, we add 1 and take the one digit.
 c + f = 5 + 8 = 13. Similarly, since it's greater than 10, we add 1 and take the one digit.
3. After taking the ones digit, we find the new sum:

 a + d = 9 
 b + e = 1 + 1 = 2. Here, we added 1 and took the one digit.
 c + f = 1 + 3 = 4.  Again, we added 1 and took the ones digit.
4. Finally, we concatenate the new sum to get the result:

- New number: 924
So, when we apply your custom addition operation to the numbers 345 and 678, we get the result 924.
