# Find the runner up score: aka the second highest
# https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list/problem?isFullScreen=true
if __name__ == '__main__':
    number_of_scores = int(input())
    scores = map(int, input().split())
    scores_list = list(scores)
    scores_list.sort(reverse=True)
    if number_of_scores <= 0:
        print('no university scores...')
    else:
        # identify the highest score:
        highest_score = scores_list[0]
        for individual_score in scores_list:
            if individual_score < highest_score:
                print(individual_score)
                break
