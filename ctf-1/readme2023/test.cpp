#include <bits/stdc++.h>
using namespace std;

#define int long long int

void sol();

int32_t main() {
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++) sol();
    return 0;
}

void sol() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        if (l == 1 && r == m) continue;
        else p.emplace_back(l, r);
    }
    sort(p.begin(), p.end());
    int ans = 0;
    multiset<int> z;
    for (int i = 0; i < p.size(); i++) {
        while (!z.empty() && *z.begin() < p[i].first) z.erase(z.begin());
        z.insert(p[i].second);
    }
    cout << ans << endl;
}