#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a;
    string b;
    cin>>a>>b;

    int x = b[2] - '0';
    int y = b[1] - '0';
    int z = b[0] - '0';

    cout << a * x << "\n";
    cout << a * y << "\n";
    cout << a * z << "\n";
    cout << a * stoi(b);

    return 0;
}