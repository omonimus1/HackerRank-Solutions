//  https://www.hackerrank.com/challenges/apple-and-orange/problem
def countApplesAndOranges(s, t, a, b, apples, oranges):
    # s-t hourse range limitis
    # a: tree position
    #b : orange position (on the right side of the house)
    number_of_apples = 0
    number_of_oranges = 0

    for single_apple in apples:
        if(single_apple < 0):
            continue
        else:
            apple_position = a +single_apple
            if(apple_position >= s and apple_position <= t):
                number_of_apples+=1

    for single_orange in oranges:
        if(single_orange > 0):
            continue
        else:
            orange_position = b + single_orange
            if(orange_position >= s and orange_position <= t):
                number_of_oranges+=1


    print(number_of_apples)
    print(number_of_oranges)