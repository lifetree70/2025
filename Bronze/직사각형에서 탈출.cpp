#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x,y,w,h,min,min2;

    cin >> x >> y >> w >> h;

    if ((w-x) > x) {
        min = x;
    }
    else if ((w-x) < x) {
        min = w-x;
    }

    if ((h-y) > y) {
        min2 = y;
    }
    else if ((h-y) < y) {
        min2 = h-y;
    }

    if (min >= min2) {
        cout << min2;
    }
    else {
        cout << min;
    }

    return 0;
}