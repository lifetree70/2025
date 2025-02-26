#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    int min = n - (m * k);
    if (min < 0) {
        min = 0;
    }

    int max = n-(k-1)*m-1;

    cout << min << " " << max;

    return 0;
}
