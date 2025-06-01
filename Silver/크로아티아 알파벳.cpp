#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;
    int count = 0;

    for (int i = 0; i < str.length(); ) {
        if (i + 2 < str.length() && str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=') {
            count++;
            i += 3;
        }
        else if (i + 1 < str.length()) {
            string two = str.substr(i, 2);
            if (two == "c=" || two == "c-" || two == "d-" || two == "lj" ||
                two == "nj" || two == "s=" || two == "z=") {
                count++;
                i += 2;
                } else {
                    count++;
                    i++;
                }
        }
        else {
            count++;
            i++;
        }
    }

    cout << count;
    return 0;
}