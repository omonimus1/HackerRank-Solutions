# https://www.hackerrank.com/challenges/itertools-combinations/problem?isFullScreen=true
"""
itertools.combinations(iterable, r)
This tool returns the length subsequences of elements from the input iterable.

Combinations are emitted in lexicographic sorted order. So, if the input iterable is sorted, the combination tuples will be produced in sorted order.
"""
from itertools import combinations
input_string, size = input().split()
input_string = ''.join(sorted(input_string)) # the key is here, the sorting of the input
size = int(size)

# We generate all the combinations UP TO SIZE K (1... N)
for i in range(0, size +1):  
    results = list(combinations(input_string, i))
    for single_entry in results:
        result = ''.join(single_entry) # combine the list of characters to a single string: ('A', 'C') into a single string: AC
        if result!= "":
            print(result)
