# https://www.hackerrank.com/challenges/hackerrank-tweets/problem
def count_hackerrank(sentence):
    counter =0
    sentence = sentence.lower()
    words = sentence.split(' ')
    # print(sentence)
    for word in words:
        if word == '#hackerrank' or word == '@hackerrank' or word == 'hackerrank':
            # print(words)
            counter +=1
    return counter
    
number_of_sentences = int(input())
# print(number_of_sentences)
result = 0
for line in range(0, number_of_sentences):
    sentence = input()
    result += count_hackerrank(sentence)
print(result)