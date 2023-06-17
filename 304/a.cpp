#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
 
using namespace std;
 
typedef long long ll;
 
#define all(x) x.begin(), x.end()
#define mp make_pair
#define pb push_back
#define INF (int)1e9
 
const int MAXN = 6e2 + 10;
int n, k, P, g[MAXN];
vector <int> ans;
vector <pair <int, int>> t[MAXN];
set <pair <int, int>> teeth, gums;
 
int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    cin >> n >> k >> P;
    for (int i = 1; i <= k; i ++) cin >> g[i];
    for (int i = 1; i <= n; i ++) {
        int a, c;
        cin >> a >> c;
        t[c].pb(mp(a, i));
    }
    int ind, maxcnt;
    ind = maxcnt = -1;
    for (int i = 1; i <= k; i ++) {
        sort(all(t[i]));
        int pp = P - g[i];
        int cnt = 0;
        for (int j = 0; j < t[i].size(); j ++) {
            if (t[i][j].first > pp) break;
            pp -= t[i][j].first;
            cnt ++;
        }
        if (cnt > maxcnt) ind = i, maxcnt = cnt;
    }
    if (maxcnt == -1) {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 1 ; i < t[ind].size(); i ++) {
        teeth.insert(t[ind][i]);
    }
    for (int i = 1; i <= k; i ++) {
        if (i == ind) continue;
        gums.insert(mp(g[i], i));
    }
    ans.pb(t[ind][0].second);
    P -= t[ind][0].first;
    while (P > 0) {
        int cost, costp, num;
        cost = costp = num = 0;
        if (teeth.size()) {
            cost = (*teeth.begin()).first;
            if (cost <= P) num = 1;
        }
        if (gums.size()) {
            costp = (*gums.begin()).first + t[(*gums.begin()).second][0].first;
            if ((num == 0 || costp <= cost) && costp <= P) num = 2;
        }
        if (num == 1) {
            ans.pb((*teeth.begin()).second);
            teeth.erase(*teeth.begin());
            P -= cost;
        }
        else if (num == 2) {
            for (int i = 1; i < t[(*gums.begin()).second].size(); i ++) {
                teeth.insert(t[(*gums.begin()).second][i]);
            }
            ans.pb(t[(*gums.begin()).second][0].second);
            gums.erase((*gums.begin()));
            P -= costp;
        }
        else break;
    }
    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); i ++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}