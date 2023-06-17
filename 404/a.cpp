#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 1e2 + 10;
int n, m;
string s[MAXN];
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < m; i++) cin >> s[i];
    n %= m;
    if (n) n--;
    else n = m - 1;
    cout << s[n] << '\n';
    return 0;
}