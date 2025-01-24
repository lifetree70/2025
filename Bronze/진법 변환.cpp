#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string n; // 수
    int b;    // 진법
    int sum = 0;

    cin >> n >> b;

    for (int i = 0; i < n.length(); i++) {
        int x;
        // 숫자인 경우
        if ('0' <= n[i] && n[i] <= '9') {
            x = n[i] - '0';
        }
        // 알파벳(A-Z)인 경우
        else if ('A' <= n[i] && n[i] <= 'Z') {
            x = n[i] - 'A' + 10;
        }
        else {
            return 1;
        }

        sum += x * pow(b, n.length() - (i + 1));
    }

    cout << sum << endl;

    return 0;
}