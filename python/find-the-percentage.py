#  https://www.hackerrank.com/challenges/finding-the-percentage/problem
if __name__ == '__main__':
    # Get number of students
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    score_record = []
    score_record = student_marks[query_name]

    sum_marks = 0
    for x in score_record:
        sum_marks += x
    percentage = "{:.2f}".format(sum_marks/len(score_record))
    print(percentage)