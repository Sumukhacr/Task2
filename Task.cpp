#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    double assignments, quizzes, exams;
    double assignmentsWeight, quizzesWeight, examsWeight;

    // Get student details and weights
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter weights for assignments, quizzes, and exams (e.g., 0.3 0.2 0.5): ";
    cin >> assignmentsWeight >> quizzesWeight >> examsWeight;

    // Get student scores
    cout << "Enter scores for assignments, quizzes, and exams: ";
    cin >> assignments >> quizzes >> exams;

    // Calculate overall grade
    double overallGrade = assignments * assignmentsWeight + quizzes * quizzesWeight + exams * examsWeight;

    // Display results
    cout << "Student Name: " << name << endl;
    cout << "Overall Grade: " << overallGrade << endl;

    return 0;
}
