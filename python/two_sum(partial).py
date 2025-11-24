## WARNING: PArtial solution
# https://www.hackerrank.com/contests/software-engineer-prep-kit/challenges/time-slot-task-pairing/problem?isFullScreen=true
def findTaskPairForSlot(taskDurations, slotLength):
    size_of_durations = len(taskDurations)
    for index in range(size_of_durations):
        for sub_index in range(index+1, size_of_durations):
            if taskDurations[sub_index] + taskDurations[index] == slotLength:
                return [index,sub_index]
    return [-1, -1]
