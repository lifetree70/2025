#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; // 입력정수
    string a; //출력문자
    a="a";
    cin >> n;

    for (int i = 1; i < n; i++) {
        a.append("a");
    }

    cout << a << endl;

    return 0;
}