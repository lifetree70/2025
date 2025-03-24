#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;

    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());

    cout << (v[0] + v[1] + v[2] + v[3] + v[4]) / 5 << '\n';
    cout << v[2];

    return 0;
}