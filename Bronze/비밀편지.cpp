#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string num[8] = {"000000", "001111", "010011", "011100", "100110", "101001", "110101", "111010"};

    int n;
    cin >> n;

    string m, r("");
    cin >> m;

    for (int i = 0; i < n; i++)
    {
        int c = 0;

        for (int j = 0; j < 8; j++)
        {
            int count = 0;

            for (int k = 0; k < 6; k++) {
                if (m[k] != num[j][k]) {
                    count++;
                    if (count > 1) break;
                }
            }

            if (count == 0 || count == 1) {
                r += j+65;
                c = 1;
                break;
            }
        }

        if (c == 0) {
            cout << i+1 << "\n";
            return 0;
        }
        else m.erase(0, 6);
    }
    cout << r << "\n";
}