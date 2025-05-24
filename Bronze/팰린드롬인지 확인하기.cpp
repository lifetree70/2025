#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string a,b;
    cin >> a;
    b=a;
    reverse(a.begin(), a.end());

    if (a==b){
        cout<<"1";
    }
    else{
        cout<<"0";
    }

    return 0;

}