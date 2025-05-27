#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string word;
    cin >> word;

    int alphabet[26] = {0};

    for (char ch : word) {
        ch = toupper(ch);
        alphabet[ch - 'A']++;
    }

    int maxCount = 0;
    int maxIndex = 0;
    bool isDuplicate = false;

    for (int i = 0; i < 26; i++) {
        if (alphabet[i] > maxCount) {
            maxCount = alphabet[i];
            maxIndex = i;
            isDuplicate = false;
        } else if (alphabet[i] == maxCount) {
            isDuplicate = true;
        }
    }

    if (isDuplicate) {
        cout << "?";
    } else {
        cout << char(maxIndex + 'A');
    }

    return 0;
}