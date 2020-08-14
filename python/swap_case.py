#  https://www.hackerrank.com/challenges/swap-case/problem
def swap_case(s):
    word = list(s)
    index = -1
    result = ''
    for x in word:
        index+=1
        if x.islower():
            result  += x.upper()
        elif x.isupper():
            result += x.lower()
        else:
            result += x
    return result