# https://www.hackerrank.com/challenges/incorrect-regex/problem?isFullScreen=true
"""
You are given a string .
Your task is to find out whether  is a valid regex or not.
Input Format
The first line contains integer , the number of test cases.
The next  lines contains the string .
Constraints
Output Format
Print "True" or "False" for each test case without quotes.
Sample Input
2
.*\+
.*+
Sample Output
True
False
"""

import re # It includes pattern compilation, search/match operations, substitution, splitting, and character-class/quantifier syntax.
n = int(raw_input())
for index in range(n):
    try:
        re.compile(raw_input())
        print("True")
    except re.error:
        print("False")
