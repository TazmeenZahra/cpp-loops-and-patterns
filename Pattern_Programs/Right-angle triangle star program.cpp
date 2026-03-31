// Print stars in shape of positive right angle triangle using for loop (nested)
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    for (int num1 = 5; num1 >= 1; num1 --) 
    {
        for (int num2 = num1; num2 <= 5; num2 ++) 
        {
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}
