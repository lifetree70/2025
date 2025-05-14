#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int count=1;
    string str;
    getline(cin, str);

    for (int i = 0; i < str.length(); i++){
        if (str[i] == ' '){
            count++;
        }
    }

    if (str[0] == ' ') {
        count--;
    }
    if (str[str.length() - 1] == ' '){
        count--;
    }

    cout << count;

    return 0;

}