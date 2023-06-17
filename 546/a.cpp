#include <bits/stdc++.h>
using namespace std;
 
int n, a, b;
string s;
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> a >> b >> s;
    if (a + b > n) {
        cout << "-1\n";
        return 0;
    }
    string x = s;
    int cntz, cnto;
    cntz = cnto = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') cntz++;
        else if (s[i] == '1') cnto++;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1' && cnto > b && cntz < a) {
            s[i] = '0', cntz++, cnto--;
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == '0' && cntz > a && cnto < b) {
            s[i] = '1', cnto++, cntz--;
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == '2') {
            if (cnto < b)
                s[i] = '1', cnto++;
            else if (cntz < a)
                s[i] = '0', cntz++;
        }
        else if (s[i] == '1' && cnto > b)
            s[i] = '2', cnto--;
        else if (s[i] == '0' && cntz > a)
            s[i] = '2', cntz--;
    }
    for (int i = 0; i < n; i++)
        if (s[i] != x[i]) ans++;
    cout << ans << '\n' << s << '\n';
    return 0;
}