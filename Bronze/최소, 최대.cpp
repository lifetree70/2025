#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,max,min;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    max = *max_element(v.begin(), v.end());
    min = *min_element(v.begin(), v.end());

    cout << min << " " << max;


    return 0;
}