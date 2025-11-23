# https://www.hackerrank.com/challenges/py-set-intersection-operation/problem?isFullScreen=true
# intersection:
# Intersection returns elements shared by both sets.
# {1,2,3} & {2,3,4} → {2,3}
# Enumerate produces index–value pairs.
# list(enumerate(['a','b'])) → [(0,'a'),(1,'b')]
# Intersection with enumerate matches only if those pairs exist in the other set.
_  = int(input())
english = set(map(int, input().split()))
_ = int(input())
french = set(map(int, input().split()))
print(len(english.intersection(french)))
