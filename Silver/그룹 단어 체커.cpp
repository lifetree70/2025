#include <bits/stdc++.h>
using namespace std;

bool isGroupWord(const string& word) {
    vector<bool> seen(26, false); // 알파벳 등장 여부
    char prev = 0; // 이전 문자 저장용

    for (char c : word) {
        if (c != prev) { // 이전에 등장한 문자가 아닌데
            if (seen[c - 'a']) { // 이미 배열에 있다면
                return false; // 이미 등장했던 문자가 다시 나타난거니 false
            }
            seen[c - 'a'] = true; // 처음 등장한 문자로 등록
        }
        prev = c; // 이전 문자 갱신
    }

    return true; // 문제 없으면 그룹 단어임
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, count = 0;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;

        if (isGroupWord(word)) {
            ++count;
        }
    }

    cout << count;

    return 0;
}