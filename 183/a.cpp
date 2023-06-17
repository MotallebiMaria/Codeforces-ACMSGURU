#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <map>
#include <deque>
 
using namespace std;
 
typedef long long ll;
 
#define all(x) x.begin(), x.end()
#define mp make_pair
#define pb push_back
#define INF (int)1e9
 
const int MAXN = 1e4 + 10;
int n, m, c[MAXN], dp[MAXN];
deque <pair <int, int>> deq;
 
int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    cin >> n >> m;
    for (int i = 0; i < n; i ++) {
        cin >> c[i];
    }
    int num, ans;
    num = 0, ans = INF;
    while (num < m - 1) {
        dp[num] = c[num];
        deq.clear();
        deq.pb(mp(dp[num], num));
        for (int i = num + 1; i < n; i ++) {
            while (deq.front().second <= i - m) deq.pop_front();
            dp[i] = c[i] + deq.front().first;
            while (deq.size() && (deq.back().first >= dp[i] || deq.back().second <= i - m)) {
                deq.pop_back();
            }
            deq.pb(mp(dp[i], i));
        }
        for (int i = n; i > n - m; i --) {
            ans = min(ans, dp[i - 1]);
        }
        num ++;
    }
    cout << ans << endl;
    return 0;
}