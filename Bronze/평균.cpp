#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, max_val=0; //시험 과목
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        if (v[i] >= max_val) {
            max_val = v[i];
        }
    }

    double x=0;
    for (int i = 0; i < n; i++) {
        x += (double)v[i]/max_val*100;
    }

    cout << x / n;

    return 0;
}