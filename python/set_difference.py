# https://www.hackerrank.com/challenges/py-set-difference-operation/problem?isFullScreen=true
# Set difference = Values which are in set A, not in B, and are not
# common between A and B.
_ = int(input())
english = set(map(int, input().split()))
_ = int(input())
french = set(map(int, input().split()))
print(len(english.difference(french)))
