#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m; // 현재 시각
    cin >> n >> m;
    int k; // 필요한 시간
    cin >> k;

    m += k;

    while (m >= 60) {
        m -= 60;
        n += 1;
    }

    while (n >= 24) {
        n -= 24;
    }

    cout << n << " " << m << endl;

    return 0;
}