#include <bits/stdc++.h>
using namespace std;

vector<int> tree[100001];
int parent[100001];

void dfs(int node) {
    for (int child : tree[node]) {
        if (parent[child] == 0) {
            parent[child] = node;
            dfs(child);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; // 노드의 개수
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    parent[1] = 1;
    dfs(1);

    for (int i = 2; i <= n; i++) {
        cout << parent[i] << '\n';
    }

    return 0;
}