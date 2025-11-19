# https://www.hackerrank.com/challenges/find-a-string/problem
# find a string
def count_substring(string, sub_string):
    sub_string_lenght = len(sub_string)
    string_lenght = len(string)
    last_index_position = string_lenght - sub_string_lenght
    count = 0
    for i in range(0, last_index_position+1):
        if(string[i:i+sub_string_lenght] == sub_string):
            count +=1 
    return count
    
