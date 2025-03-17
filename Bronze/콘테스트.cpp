#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    vector<int> b;

    for (int i = 1; i <= 10; i++) {
        int n;
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());

    for (int j = 1; j <= 10; j++) {
        int m;
        cin >> m;
        b.push_back(m);
    }
    sort(b.begin(), b.end());

    cout << v[7]+v[8]+v[9] << ' ' << b[7]+b[8]+b[9] << '\n';

    return 0;
}