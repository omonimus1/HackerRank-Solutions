# Count Elements Greater Than Previous Average
# https://www.hackerrank.com/contests/software-engineer-prep-kit/challenges/count-elements-greater-than-previous-average/problem?isFullScreen=true
def countResponseTimeRegressions(responseTimes):
    result = 0
    n = len(responseTimes)
    for i in range(1, n):
        avg = sum(responseTimes[:i]) / i
        if responseTimes[i] > avg:
            result += 1
    return result
