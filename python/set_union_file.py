# https://www.hackerrank.com/challenges/py-set-union/problem?isFullScreen=true
number_english_ids = int(input())
english_ids = set(map(int, input().split()))
number_french_ids = int(input())
french_ids = set(map(int, input().split()))
print(len(english_ids.union(french_ids)))
