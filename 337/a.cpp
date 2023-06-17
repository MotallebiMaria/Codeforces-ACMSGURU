#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <map>
 
using namespace std;
 
typedef long long ll;
 
#define all(x) x.begin(), x.end()
#define mp make_pair
#define pb push_back
#define INF (int)1e9
 
const int MAXN = 2e3 + 10;
int k;
string s, a[MAXN], b[MAXN];
 
string cycle(string x) {
    string out = "";
    for (int i = 1; i < x.size(); i ++) {
        out += x[i];
    }
    out += x[0];
    return out;
}
 
bool nEven(string x, int n) {
    if (x.size() % 2) return false;
    int cnt = 0;
    for (int i = 0; i < x.size() / 2; i ++) {
        if (x[i] != x[(int)x.size() - i - 1]) cnt++;
    }
    return (cnt <= n);
}
 
int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    cin >> k >> s;
    string ans = "";
    int n = s.size();
    for (int i = 0 ; i < s.size(); i ++) {
        a[i]  = a[max(i - 1, 0)] + s[i];
    }
    for (int i = s.size() - 1; i >= 0; i --) {
        b[i] = s[i] + b[min(i + 1, (int)s.size() - 1)];
    }
    for (int i = 0; i < s.size() - 1; i ++) {
        if (nEven(a[i], k) && (a[i].size() > ans.size() || (a[i].size() == ans.size() && a[i] < ans))) {
            ans = a[i];
        }
        for (int j = i + 1; j < s.size(); j ++) {
            string r = b[j] + a[i];
            if (nEven(r, k) && (r.size() > ans.size() || (r.size() == ans.size() && r < ans))) {
                ans = r;
            }
        }
    }
    cout << ans << endl;
    return 0;
}