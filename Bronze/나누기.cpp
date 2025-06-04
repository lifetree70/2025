#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, f;
    cin >> n >> f;

    int base = (n / 100) * 100;

    for (int i = 0; i < 100; ++i) {
        if ((base + i) % f == 0) {
            cout << setw(2) << setfill('0') << i;
            break;
        }
    }

    return 0;
}