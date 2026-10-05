#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Variables to store the 5 course IDs and grades
    string courseID[5];
    double grade[5];

    double total = 0;
    double average;
    char letterGrade;

    // Ask the user to enter the course IDs and grades
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Course " << i + 1 << " ID: ";
        cin >> courseID[i];

        cout << "Enter Grade: ";
        cin >> grade[i];

        total = total + grade[i];

        cout << endl;
    }

    // Calculate the average grade
    average = total / 5;

    // Determine the letter grade
    if (average >= 90)
    {
        letterGrade = 'A';
    }
    else if (average >= 80)
    {
        letterGrade = 'B';
    }
    else if (average >= 70)
    {
        letterGrade = 'C';
    }
    else if (average >= 60)
    {
        letterGrade = 'D';
    }
    else
    {
        letterGrade = 'F';
    }

    // Display all courses and grades
    cout << "Course Grades" << endl;
    cout << "-------------" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << courseID[i] << ": " << grade[i] << endl;
    }

    // Display the average and letter grade
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "Average Grade: " << average << endl;
    cout << "Letter Grade: " << letterGrade << endl;

    return 0;
}