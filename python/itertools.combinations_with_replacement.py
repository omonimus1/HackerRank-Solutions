# https://www.hackerrank.com/challenges/itertools-combinations-with-replacement/problem?isFullScreen=true
"""
itertools.combinations_with_replacement(iterable, r)
This tool returns  length subsequences of elements from the input iterable allowing individual elements to be repeated more than once.

The goal is to print all the combination of a string, having a specific size
"""
from itertools import combinations_with_replacement

input_string, size = input().split()  # read the input 
input_string = ''.join(sorted(input_string)) # sort inout
size = int(size)

results =  list(combinations_with_replacement(input_string, size))
for result in results:
    print(''.join(result))
