# https://www.hackerrank.com/challenges/py-set-add/problem
stamps = set()
numer_cases = int(input())
for x in range(0, numer_cases):
    single_stamp = input()
    stamps.add(single_stamp)

print(len(stamps))
