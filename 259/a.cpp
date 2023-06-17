#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 1e2 + 10;
int n;
pair <int, int> p[MAXN];
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> p[i].second;
    for (int i = 0; i < n; i++)
        cin >> p[i].first;
    sort(p, p + n);
    int ans, sum;
    ans = sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        sum += p[i].second;
        ans = max(ans, sum + p[i].first);
    }
    cout << ans << '\n';
    return 0;
}