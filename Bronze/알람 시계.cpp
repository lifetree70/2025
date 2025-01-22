#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int h = 0, m = 0;

    cin >> h >> m;

    if (m<45) {
        h = h-1;
        m = m+60;
    }
    if (h<0) {
        h = 23;
    }

    m = m - 45;

    cout << h << " " << m;

    return 0;
}