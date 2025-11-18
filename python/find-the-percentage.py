#  https://www.hackerrank.com/challenges/finding-the-percentage/problem
if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    
    average_marks = sum(student_marks[query_name]) / len(student_marks[query_name])
    print(f"{average_marks:.2f}")
