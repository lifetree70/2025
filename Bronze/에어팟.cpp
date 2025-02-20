#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; // 연결 횟수
    int b=2; // 배터리 소모량
    int m=2; // 재연결 배수
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            m*=2;
            b+=m;
        }
        else {
            m=2;
            b+=m;
        }
        if (b>=100) {
            b=0;
            m=1;
        }
    }
    cout << b;

    delete[] arr;
    return 0;
}