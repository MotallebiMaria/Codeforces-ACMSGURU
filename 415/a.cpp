#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <map>
 
using namespace std;
 
typedef long long ll;
 
#define all(x) x.begin(), x.end()
#define mp make_pair
#define pb push_back
#define INF (int)1e9
 
const int MAXN = 2e2 + 10, MAXX = 1e4 + 10;
int n, x, a[MAXN];
bool mark[MAXX];
vector <int> ans;
 
int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    cin >> n >> x;
    for (int i = 0; i < n; i ++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i ++) {
        fill(mark, mark + x + 1, false);
        mark[0] = true;
        for (int j = 0; j < n; j ++) {
            if (i == j) continue;
            for (int k = x; k >= a[j]; k--) { // reverse b/c you might be able to get sum "k - a[j]" using j itself
                if (mark[k - a[j]]) {
                    mark[k] = true;
                }
            }
        }
        if (!mark[x]) ans.pb(a[i]);
    }
    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); i ++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}