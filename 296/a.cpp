#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 1e3 + 10;
int k;
string s;
bool mark[MAXN];
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> s >> k;
    int n, ind, cnt;
    n = s.size(), ind = -1, cnt = n - k;
    while (cnt) {
        int indp = ind + 1;
        for (int i = indp; i <= n - cnt; i++) {
            if (s[i] > s[indp])
                indp = i;
        }
        mark[indp] = true;
        cnt--;
        ind = indp;
    }
    for (int i = 0; i < n; i++) {
        if (mark[i])
            cout << s[i];
    }
    cout << '\n';
    return 0;
}