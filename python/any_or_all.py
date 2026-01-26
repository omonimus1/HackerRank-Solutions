"""
You are given a space separated list of integers. If all the integers are positive, then you need to check if any integer is a palindromic integer.
https://www.hackerrank.com/challenges/any-or-all/problem?isFullScreen=true
"""
# Enter your code here. Read input from STDIN. Print output to STDOUT

"""
A palindromic number (also known as a numeral palindrome or a numeric palindrome) 
is a number (such as 16361) that remains the same when its digits are reversed. 
In other words, it has reflectional symmetry across a vertical axis. 
The term palindromic is derived from palindrome, which refers to a word (such as rotor or racecar)
whose spelling is unchanged when its letters are reversed.
The first 30 palindromic numbers (in decimal) are:
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 22, 33, 44, 55, 66, 77, 88, 99, 101, 111, 121, 131, 141, 151, 
161, 171, 181, 191, 202, ... (sequence A002113 in the OEIS).
"""
number_of_elements = int(input())
elements = list(map(int, input().split()))

print(
    all(x > 0 for x in elements) and
    any(str(x) == str(x)[::-1] for x in elements)
)

