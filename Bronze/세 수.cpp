#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c,mid;
    cin>>a>>b>>c;

    if((a>=b && a<=c) || (a>=c && a<=b)) {
        mid = a;
    }
    else if((b>=a && b<=c) || (b>=c && b<=a)) {
        mid = b;
    }
    else if((c>=a && c<=b) || (c>=b && c<=a)) {
        mid = c;
    }
    cout<<mid;

    return 0;
}