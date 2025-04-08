#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T, a, b;
    cin >> T;

    while (T--) {
        cin >> a >> b;
        a %= 10;

        if (a == 0) {
            cout << 10 << '\n';
        } else {
            int result = 1;
            for (int i = 0; i < b; i++) {
                result = (result * a) % 10;
            }
            cout << result << '\n';
        }
    }

    return 0;
}