#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, d, k;
    cin >> a >> d >> k;
    int n;

    n = (k - a + d) / d;
    if (n <= 0 || a + (d*(n-1)) != k) {
        cout << "X";
    }
    else {
        cout << n << endl;
    }

    return 0;
}
