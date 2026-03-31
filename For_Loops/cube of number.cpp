// Print cube of a number through for loop
#include <iostream>
using namespace std;
int main() {
    int num;
    int n;
    cout << "Enter a number: " ;
    cin >> n;
    for (int num = 1; num <= n; num ++) {
        cout << "Cube of " << num << " is " << num * num * num << endl;
    }
    return 0;
}
