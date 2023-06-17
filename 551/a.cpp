#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 2.5e7 + 10;
int n, t1, t2, a[MAXN];
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> t1 >> t2;
    int f;
    bool v, p;
    v = p = true;
    for (f = 1; f <= max(t1, t2) * n; f++) {
        a[f] = a[f - 1];
        if (f % t1 == 0 && f % t2 == 0 && p && v) {
            a[f] += 2;
            if (a[f] >= n) break;
        }
        else if (f % t1 == 0 && p) {
            a[f]++;
            if (a[f] >= n) p = false;
        }
        else if (f % t2 == 0 && v) {
            a[f]++;
            if (a[f] >= n) v = false;
        }
        if (!v && !p) break;
    }
    cout << a[f] << " " << f << '\n';
    return 0;
}