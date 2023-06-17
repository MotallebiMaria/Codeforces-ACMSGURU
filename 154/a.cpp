#include <bits/stdc++.h>
using namespace std;
 
int n;
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    int cnt2, cnt5, ans;
    cnt2 = cnt5 = 0, ans = 1;
    while (ans++) {
        int x = ans;
        while (x % 5 == 0)
            x /= 5, cnt5++;
        while (x % 2 == 0)
            x /= 2, cnt2++;
        if (min(cnt2, cnt5) == n) {
            cout << ans << '\n';
            break;
        }
        else if (min(cnt2, cnt5) > n) {
            cout << "No solution\n";
            break;
        }
    }
    return 0;
}