#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 1e2 + 10;
int n;
string s[MAXN];
 
string theSmallerOne(string a, string b) {
    int x, y;
    x = a.size(), y = b.size();
    for (int i = 0; i < max(x, y); i++) {
        if (a[i % x] < b[i % y])
            return a;
        else if (b[i % y] < a[i % x])
            return b;
    }
    return "0";
}
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    bool b = true;
    while (b) {
        b = false;
        for (int i = 1; i < n; i++) {
            string x = theSmallerOne(s[i], s[i - 1]);
            if (x == s[i] && x != "0")
                swap(s[i], s[i - 1]), b = true;
        }
    }
    for (int i = 0; i < n; i++)
        cout << s[i];
    cout << '\n';
    return 0;
}