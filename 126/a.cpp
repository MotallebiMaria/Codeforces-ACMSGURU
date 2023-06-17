#include <bits/stdc++.h>
using namespace std;
 
long long a, b, ans;
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> a >> b;
    if (!a || !b) {
        cout << ans << '\n';
        return 0;
    }
    while (ans++ < 1e7) {
        if (a == b) {
            cout << ans << '\n';
            return 0;
        }
        if (a < b) swap(a, b);
        a -= b, b *= 2;
    }
    cout << -1 << '\n';
    return 0;
}