#include <bits/stdc++.h>
using namespace std;
 
int k, n, x, cnt[10];
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> k >> n;
    while (n--) {
        cin >> x;
        cnt[x / 1000]++;
    }
    int ans = 0;
    for (int i = 0; i < 10; i++) {
        ans += cnt[i] / k;
        if (cnt[i] % k) ans++;
    }
    cout << ans + 2 << '\n';
    return 0;
}