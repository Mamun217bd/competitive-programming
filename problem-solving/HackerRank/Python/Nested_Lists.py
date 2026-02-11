if __name__ == '__main__':
    students = []
    scores = []
    
    for _ in range(int(input())):
        name = input()
        score = float(input())
        students.append([name, score])
        scores.append(score)
    
    unique_scores = sorted(list(set(scores)))
    second_lowest_score = unique_scores[1]
    
    second_lowest_students = []
    for name, score in students:
        if score == second_lowest_score:
            second_lowest_students.append(name)
            
    second_lowest_students.sort()
    
    for name in second_lowest_students:
        print(name)
