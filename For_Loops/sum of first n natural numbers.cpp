// Sum of first n Natural Numbers through For loop
#include <iostream>
using namespace std;
int main() {
    int num1;
    cout << "Enter a number: " << endl;
    cin >> num1;
    int sum;

    for (int num = 1; num <= num1; num ++) {
        sum = sum + num;
    }
    cout << "The sum of natural numbers is: " << sum << endl;
    return 0;
}
