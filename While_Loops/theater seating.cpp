//Output days for specified number of weeks using nested while loop
#include <iostream>
using namespace std;
int main() {
    int week;
    cout << "Enter No. of weeks upto 3: ";
    cin >> week;
    if (week > 3)
    {
        cout << "Enter number upto 3 weeks: ";
    }
    else
    {
        int day = 7;
        int i = 1;
        while (i <= week)
        {
            cout << "Week " << i << ":" << endl << "\t";
            int j = 1;
            while (j <= day)
            {
                cout << "Day " << j << " ; ";
                j ++;
            }
            i ++;
            cout << endl;
        }
    }
    return 0;
}
