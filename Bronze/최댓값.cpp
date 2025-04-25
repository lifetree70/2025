#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int max=0,count;
    vector<int> v(9);
    for (int i = 1; i <= 9; i++) {
        cin >> v[i];
        if (v[i] > max) {
            max = v[i];
        }
    }
    for (int i = 1; i <= 9; i++) {
        if (v[i] == max) {
            count=i;
        }
    }
    cout << max << "\n";
    cout << count;

    return 0;
}