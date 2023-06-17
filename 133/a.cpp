#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
const int MAXN = 2e4 + 10;
int n;
ll pm[MAXN];
pair <ll, ll> a[MAXN];
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i].first >> a[i].second;
    sort(a, a + n + 1);
    for (int i = 1; i <= n; i++)
        pm[i] = max(pm[i - 1], a[i].second);
    int ans = 0;
    for (int i = 2; i <= n; i++) {
        if (pm[i - 1] > a[i].second)
            ans++;
    }
    cout << ans << '\n';
    return 0;
}