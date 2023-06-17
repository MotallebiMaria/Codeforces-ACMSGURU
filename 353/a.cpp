#include <bits/stdc++.h>
using namespace std;
 
int n, k[2], p[3], ans;
 
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> k[0] >> k[1];
    for (int i = 0; i < 3; i++) cin >> p[i];
    if (n >= p[0]) {
        n -= p[0], ans += k[0];
        for (int i = 0; i < k[1]; i++) {
            if (n <= 0) break;
            n -= p[1], ans++;
        }
        while (n > 0)
            n -= p[2], ans++;
    }
    cout << ans << endl;
    return 0;
}