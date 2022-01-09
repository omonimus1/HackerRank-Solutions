# plus_minus.cpp
def plusMinus(arr):
    positive = 0
    negative = 0
    zeros = 0
    for number in arr:
        if number == 0:
            zeros+=1
        elif number < 0:
            negative+=1
        else:
            positive+=1
    number_of_elements = len(arr)
    print(str(positive/number_of_elements))
    print(str(negative/number_of_elements))
    print(str(zeros/number_of_elements))