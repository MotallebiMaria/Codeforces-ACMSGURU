#include <bits/stdc++.h>
using namespace std;
 
int n, ans = 1;
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) continue;
        bool b = true;
        for (int j = 2; j < i; j++) {
            if (n % j == 0 && i % j == 0) {
                b = false;
                break;
            }
        }
        if (b) ans++;
    }
    cout << ans << endl;
    return 0;
}