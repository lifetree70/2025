#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int N, M;
vector<pii> houses;
vector<pii> chickens;

int getChickenDistance(const vector<pii>& selectedChickens) {
    int totalDistance = 0;
    for (auto& house : houses) {
        int minDist = INT_MAX;
        for (auto& chicken : selectedChickens) {
            int dist = abs(house.first - chicken.first) + abs(house.second - chicken.second);
            minDist = min(minDist, dist);
        }
        totalDistance += minDist;
    }
    return totalDistance;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    vector<vector<int>> city(N, vector<int>(N));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> city[i][j];
            if (city[i][j] == 1) houses.emplace_back(i, j);
            else if (city[i][j] == 2) chickens.emplace_back(i, j);
        }
    }

    vector<int> indices(chickens.size(), 0);
    fill(indices.end() - M, indices.end(), 1);

    int result = INT_MAX;

    do {
        vector<pii> selectedChickens;
        for (int i = 0; i < chickens.size(); ++i) {
            if (indices[i]) selectedChickens.push_back(chickens[i]);
        }
        int distance = getChickenDistance(selectedChickens);
        result = min(result, distance);
    } while (next_permutation(indices.begin(), indices.end()));

    cout << result << "\n";

    return 0;
}