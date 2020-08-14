#  https://www.hackerrank.com/challenges/capitalize/problem
def solve(s):
    list_of_words = list(s.split(' '))
    result = ''
    for word in list_of_words:
        result += word.capitalize()
        result += ' '

    return result 