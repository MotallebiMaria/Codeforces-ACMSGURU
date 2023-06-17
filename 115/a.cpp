#include <bits/stdc++.h>
using namespace std;
 
int n, m;
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    int ans;
    if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && n > 31) {
        cout << "Impossible\n";
        return 0;
    }
    else if ((m == 4 || m == 6 || m == 9 || m == 11) && n > 30) {
        cout << "Impossible\n";
        return 0;
    }
    else if (m == 2 && n > 28) {
        cout << "Impossible\n";
        return 0;
    }
    else if (m > 12) {
        cout << "Impossible\n";
        return 0;
    }
    if (m == 1 || m == 10)
        ans = 1;
    else if (m == 2 || m == 3 || m == 11)
        ans = 4;
    else if (m == 4 || m == 7)
        ans = 7;
    else if (m == 5)
        ans =2;
    else if (m == 6)
        ans = 5;
    else if (m == 8)
        ans = 3;
    else if (m == 9 || m == 12)
        ans = 6;
    for (int i = 1; i < n; i++) {
        ans++;
        ans %= 7;
        if (!ans)
            ans = 7;
    }
    cout << ans << '\n';
    return 0;
}