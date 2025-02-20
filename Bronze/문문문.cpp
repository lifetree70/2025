#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; // 문의 개수
    int m; // 첫 문의 여는 방법
    cin >> n;
    cin >> m;

    if (n>=6) {
        cout << "Love is open door";
    }
    else {
        if (m==0) {
            for (int i = 1; i < n; i++) {
                if (i%2==0) {
                    cout << 0 << endl;
                }
                else if (i%2==1) {
                    cout << 1 << endl;
                }
            }
        }
        else if (m==1) {
            for (int i = 1; i < n; i++) {
                if (i%2==0) {
                    cout << 1 << endl;
                }
                else if (i%2==1) {
                    cout << 0 << endl;
                }
            }
        }
    }

    return 0;
}