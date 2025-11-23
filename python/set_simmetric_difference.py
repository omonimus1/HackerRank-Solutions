# https://www.hackerrank.com/challenges/py-set-symmetric-difference-operation/problem?isFullScreen=true
# Simmetric difference: Get all the elements which are in A, OR B (but not present in BOTH sets)
_ = int(input())
english = set(map(int, input().split()))
_ = int(input())
french = set(map(int, input().split()))
print(len(english.symmetric_difference(french)))
