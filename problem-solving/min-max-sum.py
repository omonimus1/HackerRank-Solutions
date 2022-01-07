
"""
https://www.hackerrank.com/challenges/one-week-preparation-kit-mini-max-sum/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-week-preparation-kit&playlist_slugs%5B%5D=one-week-day-one
Print two space-separated integers on one line: the minimum sum and the maximum sum of 4 of 5 given elements.
"""
def miniMaxSum(arr):
    arr.sort()
    biggest = sum(arr[1:])
    smallest = sum(arr[0:-1])
    print(str(smallest) + ' ' + str(biggest))