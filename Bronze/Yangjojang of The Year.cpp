#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; // 테스트 케이스 숫자
    cin >> n;

    for (int i = 0; i < n; i++) {
        map<int, string,greater<int>> mapset;
        int m; // 학교 숫자
        cin >> m;
        for (int j = 0; j < m; j++) {
            string s; // 학교 이름
            int k; // 술의 양
            cin >> s >> k;
            mapset[k] = s;
        }
        cout << mapset.begin()->second << "\n";
    }

    return 0;
}