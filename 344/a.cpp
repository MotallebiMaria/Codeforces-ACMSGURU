#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 1e3 + 10;
int n, m;
char a[MAXN][MAXN];
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 'X') ans++;
        }
    }
    bool b = true;
    while (b) {
        b = false;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                int cnt = 0;
                if (a[i - 1][j] == 'X') cnt++;
                if (a[i + 1][j] == 'X') cnt++;
                if (a[i][j + 1] == 'X') cnt++;
                if (a[i][j - 1] == 'X') cnt++;
                if (cnt > 1 && a[i][j] == '.') {
                    a[i][j] = 'X';
                    b = true, ans++;
                }
            }
        }
    }
    cout << ans << '\n';
    return 0;
}