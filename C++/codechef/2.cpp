#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    int x = 0, y = 0, N;

    while (T--) {
        cin >> N;
        if (N % 2 == 0) {
            x++;
        } else {
            y++;
        }
    }

    if (x > y) {
        cout << "ready" << endl;
    } else {
        cout << "not ready" << endl;
    }

    return 0;
}
