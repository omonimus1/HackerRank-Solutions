# https://www.hackerrank.com/challenges/python-quest-1/problem?isFullScreen=true
# The pattern requires printing:
# 1
# 22
# 333
# 4444
# For each i, you must print the number formed by repeating digit i exactly i times, without using strings.
# (10**i)//9 produces a number made of i digits, all 1:
# i = 1 → 1
# i = 2 → 11
# i = 3 → 111
for i in range(1, int(input())):
    print(i * ((10**i) // 9))
