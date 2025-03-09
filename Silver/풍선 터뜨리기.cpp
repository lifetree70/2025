#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; // 입력 받는 수
    cin >> n;

    deque<int> dq;
    vector<int> m(n);

    for (int i = 0; i < n; i++) {
        dq.push_back(i + 1);
    }

    for (int i = 0; i < n; i++) {
        cin >> m[i]; // 여기 들어있는 수 만큼 이동(좌우로)
    }

    while (!dq.empty()) {
        int index = dq.front();
        dq.pop_front();
        cout << index << " ";

        if (dq.empty()) break;

        int move = m[index - 1];

        if (move > 0) {
            for (int i = 0; i < move - 1; i++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        } else {
            for (int i = 0; i < abs(move); i++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }

    return 0;
}