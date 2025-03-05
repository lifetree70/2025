#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; // 문제의 개수
    cin >> n;
    vector<int> m(n);
    int k = 0; // 총점
    int s = 0; // 가산점
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }
    for (int i = 0; i < n; i++) {
        if (m[i] == 1) {
            s++;
            k += s;
        }
        else if (m[i] == 0) {
            s = 0;
        }
    }
    cout << k;

    return 0;
}