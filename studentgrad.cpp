#include <iostream>
#include <vector>
using namespace std;

float calculateAverage(vector<float> marks) {
    float sum = 0;
    for (float mark : marks) {
        sum += mark;
    }
    return sum / marks.size();
}

char calculateGrade(float mark) {
    if (mark >= 90)
        return 'A';
    else if (mark >= 80)
        return 'B';
    else if (mark >= 70)
        return 'C';
    else if (mark >= 60)
        return 'D';
    else
        return 'F';
}

int main() {
    int n;
    cout << "Enter number of subjects: ";
    cin >> n;

    vector<float> marks(n);
    for (int i = 0; i < n; ++i) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
    }

    float average = calculateAverage(marks);
    char grade = calculateGrade(average);

    cout << "Average Marks: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}

