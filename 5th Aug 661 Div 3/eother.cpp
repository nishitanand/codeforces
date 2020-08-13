#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair< int , int >PII;
const int MAXN = 1e5+7;

int uu[MAXN], vv[MAXN], ww[MAXN];
vector<int>edg[MAXN];

set<PII>stk;
LL upore;
LL S;

int ans;
void dfs(int u, int bap) {
//    cout << "at " << u << " with " << upore << endl;
    while (upore > S) {
        PII p = *prev(stk.end());
        stk.erase(prev(stk.end()));
        upore -= p.first;
        assert(p.first == ww[p.second]);
        p.first >>= 1;
        ww[p.second] >>= 1;
        upore += p.first;
        stk.insert(p);
        ans++;
//        cout << p.second << " halved -> " << upore << endl;
    }

    for (int idx : edg[u]) {
        int v = uu[idx]^vv[idx]^u;
        if (v==bap) continue;
        upore += ww[idx];
        stk.emplace(ww[idx], idx);
        dfs(v, u);
        upore -= ww[idx];
        stk.erase(PII(ww[idx], idx));
    }
}

int solve() {
    int n;
    cin >> n >> S;

    for (int i = 1; i <= n; i++) {
        edg[i].clear();
    }

    for (int i = 1; i < n; i++) {
        cin >> uu[i] >> vv[i] >> ww[i];
        edg[uu[i]].push_back(i);
        edg[vv[i]].push_back(i);
    }

    ans = 0;
    dfs(1, 0);

    return ans;
}

int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        cout << solve() << "\n";
    }


    return 0;
}
