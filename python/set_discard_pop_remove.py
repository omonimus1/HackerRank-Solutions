# https://www.hackerrank.com/challenges/py-set-discard-remove-pop/problem?isFullScreen=true
n = int(input())
s = set(map(int, input().split()))

number_of_actions = int(input())
for _ in range(0, number_of_actions):
    try:
        command = input().split()
        if command[0] == "pop":
            s.pop()
        if command[0] == "remove":
            s.remove(int(command[1]))
        elif command[0] == "discard":
            s.discard(int(command[1]))
    except Exception as e:
        print(str(e))
print(sum(s))
