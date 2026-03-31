// Print Even numbers between 1 and 20 through for loop
#include <iostream>
using namespace std;
int main() {
    int num;
    for (int num = 1; num <= 20; num ++) 
    {
        if (num %2 == 0) {
            cout << "Even numbers: " << num << endl;
        }
    }
return 0;
}
