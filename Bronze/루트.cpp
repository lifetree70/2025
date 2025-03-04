#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int b, n; // 양의 정수 B, N

    while (true) {
        cin >> b >> n;
        if (b == 0 && n == 0) {
            return 0;
        }

        int a = pow(b, 1.0 / n);

        // A와 A+1 중에서 B에 더 가까운 값을 찾기
        int lower = pow(a, n);
        int upper = pow(a + 1, n);

        if (abs(b - lower) <= abs(b - upper)) {
            cout << a << endl;
        } else {
            cout << a + 1 << endl;
        }
    }

    return 0;
}