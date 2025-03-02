#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    if (n == 1) { cout << 0; }
    else {
        if (n % 2 == 0) cout << (n * n)/2;
        else cout << (n * n) / 2 + 1;
    }
    return 0;
}