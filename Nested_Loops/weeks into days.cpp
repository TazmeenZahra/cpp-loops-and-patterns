//Output days for specified number of weeks using nested for loop
#include <iostream>
using namespace std;
int main() {
    int week;
    cout << "Enter No. of Weeks upto 3: ";
    cin >> week;
    if (week > 3) 
    {
        cout << "Enter number upto 3 weeks: ";
    }
    else
    {
    int day = 7;
    for (int i = 1; i <= week; i ++)
    {
        cout << "Week " << i << ": " << endl << "\t";
        for (int j = 1; j <= day; j ++)
        {
            cout << "Day " << j << " ; ";
        }
        cout << endl;
    }
    }
    return 0;
}
