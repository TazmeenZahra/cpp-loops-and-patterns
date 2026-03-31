// Multiplication table of a number through for loop
#include <iostream>
using namespace std;
int main() {
    int product;
    cout << "Enter a number: ";
    cin >> product;

    int multiplied_num;
    cout << "Enter multiplied number: " ;
    cin >> multiplied_num;

    for (int num = 1; num <= multiplied_num; num ++) {
        cout << product << " x " << num << " = " << product * num << endl;
    }
    return 0;
}
