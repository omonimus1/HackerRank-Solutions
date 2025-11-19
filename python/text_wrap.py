# https://www.hackerrank.com/challenges/text-wrap/problem?isFullScreen=true
"""
Check Tutorial tab to know how to to solve.

You are given a string  and width .
Your task is to wrap the string into a paragraph of width .

Function Description

Complete the wrap function in the editor below.

wrap has the following parameters:

string string: a long string
int max_width: the width to wrap to
Returns

string: a single string with newline characters ('\n') where the breaks should be
Input Format

The first line contains a string, .
The second line contains the width, .
"""
def wrap(string, max_width):
    string_size = len(string)
    if string_size <= max_width:
        return string
    else:
        solution = ''
        for i in range(0, string_size, max_width):
            solution += string[i: i+max_width]
            solution += "\n"
    return solution
