# Function to convert marks to grade and grade point
def get_grade_point(marks):
    if 80 <= marks <= 100:
        return "A+", 4.00
    elif 75 <= marks <= 79:
        return "A", 3.75
    elif 70 <= marks <= 74:
        return "A-", 3.50
    elif 65 <= marks <= 69:
        return "B+", 3.25
    elif 60 <= marks <= 64:
        return "B", 3.00
    elif 55 <= marks <= 59:
        return "B-", 2.75
    elif 50 <= marks <= 54:
        return "C+", 2.50
    elif 45 <= marks <= 49:
        return "C", 2.25
    elif 40 <= marks <= 44:
        return "D", 2.00
    else:
        return "F", 0.00

def calculate_cgpa():
    total_points = 0.0
    total_credits = 0.0

    n = int(input("Enter number of subjects: "))

    for i in range(n):
        subject = input(f"\nEnter name of subject {i+1}: ")
        credit = float(input(f"Enter credit for {subject}: "))
        marks = float(input(f"Enter marks for {subject} (0–100): "))

        grade, point = get_grade_point(marks)
        print(f"Grade for {subject}: {grade} (Grade Point: {point})")

        total_points += credit * point
        total_credits += credit

    if total_credits == 0:
        print("\nNo valid subjects entered. CGPA cannot be calculated.")
    else:
        cgpa = total_points / total_credits
        print(f"\nYour CGPA is: {cgpa:.2f}")

# Run the program
calculate_cgpa()
