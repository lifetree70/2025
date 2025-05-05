#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> v(n, 0);

    for (int x = 0; x < m; x++) {
        int i, j, k;
        cin >> i >> j >> k;
        for (int a = i; a <= j; a++) {
            v[a - 1] = k;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}