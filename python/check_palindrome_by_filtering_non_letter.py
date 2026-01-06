#!/bin/python3
def isAlphabeticPalindrome(code):
    code = code.lower()
    # print(code)
    code_filtered = []
    for character in code:
        if character.isalpha(): # check if it is an alphabetic character (a..z)
            code_filtered.append(character)
    if code_filtered == code_filtered[::-1]:
        return 1
    return 0

if __name__ == '__main__':
    code = input()

    result = isAlphabeticPalindrome(code)

    print(int(result))
