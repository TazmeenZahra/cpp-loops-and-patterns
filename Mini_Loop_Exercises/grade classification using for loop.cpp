// Grade Classification based on marks
#include <iostream>
using namespace std;
int main() {
    int num_subject, sum;
    cout << "Enter number of subjects: ";
    cin >> num_subject;

    for (int num = 1; num <= num_subject; num ++) {
        int marks;
        cout << "Enter marks: ";
        cin >> marks;
        sum = sum + marks;
    }
    int average = sum/num_subject;
    if (average >= 90 && average <=100) {
        cout << "Grade A";
    }
    else if (average >= 75 && average <= 89) {
        cout << "Grade B";
    }
    else if (average >=50 && average <=74) {
        cout << "Grade C";
    }
    else if (average >= 0 && average < 50) {
        cout << "Grade F";
    }
    return 0;
}
