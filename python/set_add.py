# Use the set to print the distinct number of stamps
# https://www.hackerrank.com/challenges/py-set-add/problem?isFullScreen=true
number_of_stamps = int(input())
stamps = set()
for _ in range(0, number_of_stamps):
    stamps.add(input())
print(len(stamps))
