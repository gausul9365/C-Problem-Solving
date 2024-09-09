#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int T;

    while (T--) {

        int X, Y, Z;
        cin >> X >> Y >> Z;

        int totalStudent = X * Y;

        int totalPercentage = (Z * 100) / totalStudent;

        if (totalPercentage > 50) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No"<<endl;
        }



    }
    return 0;
}
