#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 7e4 + 10;
int n, a[MAXN], ans;
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[i])
                ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}