#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; // 돌 수
    cin >> n;

    if (n % 2 == 0) {
        cout << "CY" << endl;
    }
    else {
        cout << "SK" << endl;
    }

    return 0;
}