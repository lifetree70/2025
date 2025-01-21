#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x = 0, y = 0;

    cin >> x;
    cin >> y;

    if (x > 0 && y > 0) {
        cout << "1";
    }
    else if (x < 0 && y > 0) {
        cout << "2";
    }
    else if (x < 0 && y < 0) {
        cout << "3";
    }
    else if (x > 0 && y < 0) {
        cout << "4";
    }
    else {
        cout << "error";
    }

    return 0;
}