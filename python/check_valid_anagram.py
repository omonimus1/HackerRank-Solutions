# https://www.hackerrank.com/contests/software-engineer-prep-kit/challenges/check-valid-anagram/problem?isFullScreen=true
#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'isAnagram' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. STRING s
#  2. STRING t
# Definition of valid anagram: A and B share the same letter in the same frequency of such latter.

def isAnagram(s, t):
    # make them a list so that I can sort them and iterate them to compare them. 
    # A different approach is to use a map, and check that their letters and frequency matches 1 to 1. if it does not match, or some letters
    # are present in s but not in T or viversa, they are not a valid anagram.
    s = list(s)
    t = list(t)
    s.sort()
    t.sort()
    # if they have different size, they cannot be an anagram.
    if s != t:
        return 0
    return 1
