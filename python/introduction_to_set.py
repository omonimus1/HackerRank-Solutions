# https://www.hackerrank.com/challenges/py-introduction-to-sets/problem?isFullScreen=true

def average(array):
    my_set = set(array)
    sum_distinct_heights = 0
    for number in my_set:
        sum_distinct_heights += number
    number_of_discting_heights = len(my_set)
    return sum_distinct_heights / number_of_discting_heights
