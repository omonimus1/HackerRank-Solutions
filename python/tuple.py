# https://www.hackerrank.com/challenges/python-tuples/problem?isFullScreen=true
# Tuple
# It works just with python2, as python3 hash has a rand() component
if __name__ == '__main__':
    n = int(raw_input())
    integer_list = tuple(map(int, raw_input().split()))
    print hash(integer_list)
