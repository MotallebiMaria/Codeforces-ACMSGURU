#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
ll n, h;
vector <ll> l;
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> h;
    h++;
    ll num, x;
    num = h * h, x = h;
    if (num == n) {
        cout << n << '\n';
        return 0;
    }
    for (ll i = h; h + i * i <= n; i++) {
        l.push_back(h + i * i);
    }
    if (l.size()) {
        for (ll i = l.size() - 1; i >= 0; i--)
            cout << l[i] << " ";    
    }
    cout << num << " ";
    x = h * 2;
    for (ll i = num + x; i <= n; i += x) {
        cout << i << " ";
        x += 2;
    }
    cout << '\n';
    return 0;
}