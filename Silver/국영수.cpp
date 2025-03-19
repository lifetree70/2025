#include <bits/stdc++.h>
using namespace std;

tuple<string, int, int, int> tup()
{
    int kor, eng, math;
    string name;
    cin >> name >> kor >> eng >> math;

    return make_tuple(name, kor, eng, math);
}

bool compare(const tuple<string, int, int, int>& a, const tuple<string, int, int, int>& b) {
    // 국어 점수 내림차순
    if (get<1>(a) != get<1>(b))
        return get<1>(a) > get<1>(b);

    // 국어 점수가 같으면 영어 점수 오름차순
    if (get<2>(a) != get<2>(b))
        return get<2>(a) < get<2>(b);

    // 국어, 영어 점수가 같으면 수학 점수 내림차순
    if (get<3>(a) != get<3>(b))
        return get<3>(a) > get<3>(b);

    // 모든 점수가 같으면 이름을 사전순 오름차순
    return get<0>(a) < get<0>(b);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; //학생 수
    cin >> n;
    vector<tuple<string, int, int, int>> v;

    for (int i = 0; i < n; i++) {
        tuple<string, int, int, int> t;
        t = tup();
        v.push_back(t);
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << get<0>(v[i]) << "\n";
    }

    return 0;
}