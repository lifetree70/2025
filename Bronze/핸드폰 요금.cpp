#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, y = 0, m = 0;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        // (v[i] / 30 + 1): 30초마다 10원 요금
        y += (v[i] / 30 + 1) * 10;

        // (v[i] / 60 + 1): 60초마다 15원 요금
        m += (v[i] / 60 + 1) * 15;
    }

    if (y < m) {
        cout << "Y " << y;
    } else if (y > m) {
        cout << "M " << m;
    } else {
        cout << "Y M " << y;
    }

    return 0;
}