#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, v;
    cin >> a >> b >> v;

    int days = (v - b - 1) / (a - b) + 1;
    cout << days << '\n';

    return 0;
}