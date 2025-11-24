# https://www.hackerrank.com/contests/software-engineer-prep-kit/challenges/first-occurrence-in-event-code-log/problem?isFullScreen=true
def findFirstOccurrence(nums, target):
    for index in range(0, len(nums)):
        if nums[index] == target:
            return index
    return -1
