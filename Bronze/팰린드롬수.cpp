#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while (1) {
        string s="";
        cin >> s;
        if (s == "0") {
            return 0;
        }

        string x="";

        for (int i = s.length()-1; i >= 0; i--) {
            x += s[i];
        }
        if (s == x) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }

    return 0;
}