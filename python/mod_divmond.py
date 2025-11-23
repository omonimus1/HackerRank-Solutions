#  divmod, which takes two arguments  and  and returns a tuple containing the quotient of  first and then the remainder .
"""
Integer division gives the quotient. Modulo gives the remainder.
`divmod(a, b)` returns both as a tuple.
Examples:
1.
a = 17, b = 5
17 ÷ 5 = 3 (quotient)
17 mod 5 = 2 (remainder)
divmod(17, 5) → (3, 2)
2.
a = 100, b = 30
100 ÷ 30 = 3
100 mod 30 = 10
divmod(100, 30) → (3, 10)

3.
a = 9, b = 3
9 ÷ 3 = 3
9 mod 3 = 0
divmod(9, 3) → (3, 0)

4.
a = 25, b = 7
25 ÷ 7 = 3
25 mod 7 = 4
divmod(25, 7) → (3, 4)
"""
first_number = int(input())
second_number = int(input())

result = divmod(first_number, second_number)
print(result[0])
print(result[1])
print(divmod(first_number, second_number))
