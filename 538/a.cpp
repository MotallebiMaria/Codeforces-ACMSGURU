#include <bits/stdc++.h>
using namespace std;
 
string s;
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    getline(cin, s);
    string x = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ')' || s[i] == '(')
            x += s[i];
    }
    int ans = x.size();
    for (int i = 1; i < x.size(); i++) {
        if (x[i] == ')' && x[i - 1] == '(')
            ans -= 2;
    }
    cout << ans << '\n';
    return 0;
}