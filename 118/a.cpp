#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 1e3 + 10;
int k, n;
long long a[MAXN], ans[MAXN];
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> k;
    while (k--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] %= 9;
            if (a[i] == 0)
                a[i] = 9;
        }
        for (int i = 0; i < n; i++) {
            if (i == 0)
                ans[i] = a[i];
            else
                ans[i] = ans[i - 1] * a[i];
            ans[i] %= 9;
            if (ans[i] == 0)
                ans[i] = 9;
        }
        for (int i = 0; i < n; i++) {
            if (i)
                ans[i] += ans[i - 1];
            ans[i] %= 9;
            if (ans[i] == 0)
                ans[i] = 9;
        }
        cout << ans[n - 1] << '\n';
    }
    return 0;
}