#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = n-1; j > i-1; j--) {
            cout << ' ';
        }
        for (int k = 0; k < 2*i-1; k++) {
            cout << '*';
        }
        cout << "\n";
    }
    return 0;
}