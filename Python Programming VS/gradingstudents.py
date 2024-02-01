if __name__ == '__main__':
#Initialising an empty list set to store student and their marks
    records = []
#For Loop To take information of n students
    for _ in range(int(input())):
        name = input()
        score = float(input())
        records.append([name, score])

# Sorting the values of unique score using comprehenseive set syntax
    unique_grades = sorted(set(grade for name, grade in records))

# Find the second lowest grade
    second_lowest_grade = unique_grades[1] if len(unique_grades) > 1 else unique_grade[0]

#Students with second lowest grade
    students_second = sorted(set([name for name, grade in records if grade==second_lowest_grade]))
    for student in students_second:
        print(student)