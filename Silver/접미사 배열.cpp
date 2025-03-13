#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string n;
    cin >> n;
    vector<string> v;

    for (int i = 0; i < n.size(); i++) {
        v.push_back(n.substr(i, n.size() - i));
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }

    return 0;
}