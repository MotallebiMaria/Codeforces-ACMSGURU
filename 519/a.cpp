#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 1e2 + 10;
int n, f, a[MAXN];
bool mark[MAXN];
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> f;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mark[a[i]] = true;
    }
    for (int i = 0; i < n; i++) {
        if (!mark[a[i]]) continue;
        while (f < a[i]) {
            if (mark[f]) {
                cout << f << " ";
                mark[f] = false;
            }
            f++;
        }
        while (f > a[i]) {
            if (mark[f]) {
                cout << f << " ";
                mark[f] = false;
            }
            f--;
        }  
        cout << a[i] << " ";
        mark[a[i]] = false;
    }
    cout << '\n';
    return 0;
}