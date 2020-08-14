#  https://www.hackerrank.com/challenges/validating-the-phone-number/problem
import re
for i in range(int(raw_input())):
    # The reg expression says that: the number must start with 789
    # The, there could be any number, but the number of digits mus be 9 
    print 'YES' if re.search(r"^[789]\d{9}$",raw_input()) else 'NO'