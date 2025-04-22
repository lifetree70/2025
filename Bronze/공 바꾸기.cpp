#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N,M,x,y,temp=0;
    cin>>N>>M;
    vector<int> v(N);
    for(int i=0;i<N;i++) {
        v[i]=i+1;
    }
    for(int i=0;i<M;i++) {
        cin>>x>>y;
        temp=v[x-1];
        v[x-1]=v[y-1];
        v[y-1]=temp;
    }
    for(int i=0;i<N;i++) {
        cout<<v[i]<<" ";
    }

    return 0;
}