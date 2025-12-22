# https://www.hackerrank.com/challenges/itertools-permutations/problem?isFullScreen=true
# This tool returns successive  length permutations of elements in an
#  iterable.
# If  is not specified or is None, then  defaults to the length of the iterable, and all possible full length permutations are generated.
# Permutations are printed in a lexicographic sorted order. So, if the input iterable is sorted, the permutation tuples will be produced in a sorted order.

"""
Permutations and combinations differ by whether order matters.

Permutations: order matters.
Selecting the same elements in a different order produces a different result.
Example: from {A, B, C}, AB and BA are different permutations.
Count: nPr = n! / (n − r)!
"""

from itertools import permutations

string_input, size = input().split()
size = int(size)
string_input = ''.join(sorted(string_input))

results = list(permutations(string_input, size))
for result in results:
    print(''.join(result))
