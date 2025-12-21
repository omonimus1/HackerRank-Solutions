# https://www.hackerrank.com/challenges/python-eval/problem?isFullScreen=true
expression = input()
# print(expression)
eval(expression)


# Something that didn't passed all test cases -- as second attempt
# Get the first part of the string, betweeen the first parenthesis and the + (sum) operator
# expression.split('(', 1)[1].split("+", 1)[0]
# expression.split('(', 1)[1] => Says to get all everything after indicated with "1"
# and then stop to extract the sub-string, until the second end operator.abs
# first_digit = expression.split('(', 1)[1].split("+", 1)[0]
# # print('first digit', first_digit)
# second_digit = expression.split('+', 1)[1].split(")", 1)[0]
# # print('second digit', second_digit)
# print(int(first_digit) + int(second_digit))
